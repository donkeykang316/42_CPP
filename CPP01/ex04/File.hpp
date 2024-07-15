/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:13:13 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 15:48:44 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring> 

#ifndef FILE_HPP
#define FILE_HPP

class File
{
private:
    std::string _fileName;
    std::string _newFile;
    std::string _string1;
    std::string _string2;

public:
    File() {}

    ~File() {}

    void replace(std::string FileName, std::string String1, std::string String2) {
        _fileName = FileName;
        _newFile = "Copy of " + FileName;
        _string1 = String1;
        _string2 = String2;
        creatNewFile();
    }

    void creatNewFile() {
        std::ifstream   inputFile(_fileName.c_str());
        std::string     Line;
        std::string     Temp;
        std::size_t     po;

        if (!inputFile) {
            std::cerr << "Open error!\n";
            return;
        }
        std::ofstream   outputFile(_newFile.c_str());
        do {
            if (!Line.empty()) {
                po = getString(Line);
                if (po < Line.length()) {
                    Temp = Line.substr(0, po);
                    Temp += _string2;
                    Temp += Line.substr(_string1.length() + po, Line.length());
                }
                else {
                    Temp = Line;
                }
                outputFile << Temp << std::endl;
            }
        } while (getline(inputFile, Line));
        inputFile.close();
        outputFile.close();
    }

    std::size_t getString(std::string Line) {
        std::size_t po = Line.find(_string1);
        if (po > Line.length())
            po = Line.length();
        return po;
    }
};

#endif