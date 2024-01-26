#include "linkedlist.hpp"

template <typename T>
Yuha::SingleNode<T>::SingleNode() : mNext(nullptr) {}

template<typename T>
Yuha::SingleLinkedList<T>::SingleLinkedList() : mHead(nullptr), mTail(nullptr) {}

template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::insertFront(const T& pData)
{
    SingleNode<T> *newNode = new SingleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        nweNode->mNext = mHead;
        mHead = newNode;
    }


    return mHead;
}


template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::insertBack(const T& pData)
{
    SingleNode<T> *newNode = new SingleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        mTail->mNext = newNode;
        mTail = newNode;
    }


    return mTail;
}

template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::insertFront(T&& pData)
{
    SingleNode<T> *newNode = new SingleNode<T>;
    newNode->mValue = std::move(pData);

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        nweNode->mNext = mHead;
        mHead = newNode;
    }


    return mHead;
}


template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::insertBack(T&& pData)
{
    SingleNode<T> *newNode = new SingleNode<T>;
    newNode->mValue = std::move(pData);

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        mTail->mNext = newNode;
        mTail = newNode;
    }


    return mTail;
}

template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::peakFront() const 
{
    return mHead;
}

template<typename T>
Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::peakFront()
{
    return mHead;
}

template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::peakBack() const 
{
    return mTail;
}

template<typename T>
Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::peakBack()
{
    return mTail;
}


template<typename T>
Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::peakBack()
{
    return mTail;
}


template<typename T>
const Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::findValue(const T& pValue) const 
{
    SingleNode<T>* traverse = mHead;

    while (traverse != nullptr)
    {
        if (traverse->mValue == pValue)
            return traverse;
        traverse = traverse->mNext;
    }

    return nullptr;
}

template<typename T>
Yuha::SingleNode<T>* Yuha::SingleLinkedList<T>::findValue(const T& pValue)
{
    SingleNode<T>* traverse = mHead;

    while (traverse != nullptr)
    {
        if (traverse->mValue == pValue)
            return traverse;
        traverse = traverse->mNext;
    }

    return nullptr;
}

template<typename T>
void Yuha::SingleLinkedList<T>::popback()
{
    SingleNode<T>* traverse = mHead;
    
    if (traverse == nullptr)
        return;

    while(traverse != nullptr && traverse->mNext != nullptr && traverse->mNext->mNext != nullptr)
    {
        traverse = traverse->mNext;
    }

    delete traverse->mNext;
    traverse->mNext = nullptr;
    mTail = traverse;
}

template<typename T>
void Yuha::SingleLinkedList<T>::popfront()
{
    if (mHead == nullptr)
        return;
    
    SingleNode<T>* buffer = mHead->mNext;
    delete mHead;
    mHead = buffer;
}

template <typename T>
void Yuha::SingleLinkedList<T>::print()
{
    SingleNode<T>* traverse = mHead;
    while (traverse != nullptr)
    {
        std::cout << traverse->mValue << "-> ";
        traverse = traverse->mNext;
    }
    std::cout << "END" << std::endl;
}

template <typename T>
Yuha::SingleLinkedList<T>::~SingleLinkedList()
{
    SingleNode<T>* traverse = mHead;
    
    while (traverse != nullptr)
    {
        SingleNode<T>* buffer = traverse->mNext;
        delete traverse;
        traverse = buffer;
    }

    mHead = nullptr;
    mTail = nullptr;
}










