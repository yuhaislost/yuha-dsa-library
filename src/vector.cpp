#include "vector.hpp";

template <typename T>
Yuha::Vector<T>::Vector() : mData(nullptr), mSize(0), mCapacity(0)
{
    reAllocate(2);
}

template <typename T>
void Yuha::Vector<T>::reAllocate(size_t pNewCapacity)
{
    T* newDataBlock = new T[pNewCapacity];

    if (pNewCapacity < mSize)
    {
        mSize = pNewCapacity;
    }
    
    for (size_t i {0}; i < mSize; i++)
    {
        newDataBlock[i] = std::move(mData[i]);
    }

    delete [] mData;
    mData = newDataBlock;
    mCapacity = pNewCapacity;
}

template <typename T>
const T& Yuha::Vector<T>::push_back(const T& pValue)
{
    if (mSize >= mCapacity)
        reAllocate(mCapacity + mCapacity / 2);
    
    mData[mSize++] = pValue;
    
    return mData[mSize - 1];
}

template <typename T>
const T& Yuha::Vector<T>::push_back(T&& pValue)
{
    if (mSize >= mCapacity)
        reAllocate(mCapacity + mCapacity / 2);
    
    mData[mSize++] = std::move(pValue);
    
    return mData[mSize - 1];
}

template <typename T>
void Yuha::Vector<T>::popback()
{
    if (mSize - 1 > 0)
    {
        mSize--;
        mData[mSize].~T();
    }


}

template <typename T>
size_t Yuha::Vector<T>::size()
{
    return mSize;
}

template <typename T>
const T& Yuha::Vector<T>::operator[](size_t pIndex) const
{
    if (pIndex >= mSize)
    {
        assert(("Accessing an element outside of vector size", pIndex >= mSize));
    }

    return mData[pIndex];
}

template <typename T>
T& Yuha::Vector<T>::operator[](size_t pIndex)
{
    if (pIndex >= mSize)
    {
        assert(("Accessing an element outside of vector size", pIndex >= mSize));
    }
    
    return mData[pIndex];
}

template <typename T>
Yuha::Vector<T>::~Vector()
{
    delete [] mData;
}