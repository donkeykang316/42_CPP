#include <iostream>

template <typename T>
class Array {
	private:
		T*				array_;
		unsigned int	size_;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array& operator=(const Array& src);

		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size() const;
};

template <typename T>
Array<T>::Array() {
	array_ = new T[0];
	size_ = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	size_ = n;
	array_ = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array_[i] = T();
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
	if (this != &src) {
		delete[] array_;
		size_ = src.size();
		array_ = new T[size_];
		for (unsigned int i = 0; i < size_; i++)
			array_[i] = src[i];
	}
	return *this;
}

template <typename T>
Array<T>::Array(const Array& src) {
	size_ = src.size();
	array_ = new T[src.size()];
	for (unsigned int i = 0; i < size_; i++)
		array_[i] = src[i];
}

template <typename T>
Array<T>::~Array() {
	delete[] array_;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= size_)
		throw std::exception();
	return array_[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= size_)
		throw std::exception();
	return array_[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return size_;
}