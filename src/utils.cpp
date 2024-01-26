#include "utils.hpp"

template <typename T>
void Yuha::printVector(const Yuha::Vector<T>& pVector)
{
    for (size_t i {0}; i < pVector.size(); i++)
        std::cout << pVector[i] << std::endl;
    std::cout << "__________________________________\n";
}