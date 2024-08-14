#include "Serializer.hpp"
#include <cassert>
#include <string>

int main() {

// test 1    
Data originalData = {42, 3.14f, 'a'};

uintptr_t serializedData = Serializer::serialize(&originalData);
Data* deserializedData = Serializer::deserialize(serializedData);

// Check if the pointers are the same
assert(&originalData == deserializedData);

std::cout << "originalData: " << &originalData << std::endl;
std::cout << "deserializedData: " << deserializedData << std::endl;

// Check if the data members are the same
assert(deserializedData->intValue == 42);
assert(deserializedData->floatValue == 3.14f);
assert(deserializedData->charValue == 'a');
std::cout << "Test 1 passed" << std::endl;
std::cout << std::endl;

// test 2
Data data1 = {10, 1.23f, 'x'};
Data data2 = {20, 4.56f, 'y'};
Data data3 = {30, 7.89f, 'z'};

uintptr_t serializedData1 = Serializer::serialize(&data1);
uintptr_t serializedData2 = Serializer::serialize(&data2);
uintptr_t serializedData3 = Serializer::serialize(&data3);

Data* deserializedData1 = Serializer::deserialize(serializedData1);
Data* deserializedData2 = Serializer::deserialize(serializedData2);
Data* deserializedData3 = Serializer::deserialize(serializedData3);

assert(&data1 == deserializedData1);
assert(&data2 == deserializedData2);
assert(&data3 == deserializedData3);

assert(deserializedData1->intValue == 10);
assert(deserializedData1->floatValue == 1.23f);
assert(deserializedData1->charValue == 'x');

assert(deserializedData2->intValue == 20);
assert(deserializedData2->floatValue == 4.56f);
assert(deserializedData2->charValue == 'y');

assert(deserializedData3->intValue == 30);
assert(deserializedData3->floatValue == 7.89f);
assert(deserializedData3->charValue == 'z');
std::cout << "Test 2 passed" << std::endl;

return 0;
}