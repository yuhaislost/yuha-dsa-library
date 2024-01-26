#include "linkedlist.hpp"

template <typename T>
Yuha::SingleNode<T>::SingleNode() : mNext(nullptr) {}

template <typename T>
Yuha::DoubleNode<T>::DoubleNode() : mNext(nullptr), mPrev(nullptr) {}

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

//Double Linked List

template<typename T>
Yuha::DoubleLinkedList<T>::DoubleLinkedList() : mHead(nullptr), mTail(nullptr) {}

template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::insertFront(const T& pData)
{
    DoubleNode<T> *newNode = new DoubleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        mHead->mPrev = newNode;
        nweNode->mNext = mHead;
        mHead = newNode;
    }


    return mHead;
}


template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::insertBack(const T& pData)
{
    DoubleNode<T> *newNode = new DoubleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        newNode->mPrev = mTail;
        mTail->mNext = newNode;
        mTail = newNode;
    }


    return mTail;
}

template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::insertFront(T&& pData)
{  
    DoubleNode<T> *newNode = new DoubleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        mHead->mPrev = newNode;
        nweNode->mNext = mHead;
        mHead = newNode;
    }


    return mHead;
}


template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::insertBack(T&& pData)
{
    DoubleNode<T> *newNode = new DoubleNode<T>;
    newNode->mValue = pData;

    if (mHead == nullptr && mTail == nullptr)
    {
        mHead = newNode;
        mTail = newNode;
    }
    else
    {
        newNode->mPrev = mTail;
        mTail->mNext = newNode;
        mTail = newNode;
    }


    return mTail;
}


template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::peakFront() const 
{
    return mHead;
}

template<typename T>
Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::peakFront()
{
    return mHead;
}

template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::peakBack() const 
{
    return mTail;
}

template<typename T>
Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::peakBack()
{
    return mTail;
}


template<typename T>
Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::peakBack()
{
    return mTail;
}


template<typename T>
const Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::findValue(const T& pValue) const 
{
    DoubleNode<T>* traverse = mHead;

    while (traverse != nullptr)
    {
        if (traverse->mValue == pValue)
            return traverse;
        traverse = traverse->mNext;
    }

    return nullptr;
}

template<typename T>
Yuha::DoubleNode<T>* Yuha::DoubleLinkedList<T>::findValue(const T& pValue)
{
    DoubleNode<T>* traverse = mHead;

    while (traverse != nullptr)
    {
        if (traverse->mValue == pValue)
            return traverse;
        traverse = traverse->mNext;
    }

    return nullptr;
}

template<typename T>
void Yuha::DoubleLinkedList<T>::popback()
{
    if (mTail == nullptr)
        return;

    DoubleNode<T>* buffer = mTail->mPrev;

    delete mTail;

    buffer->mNext = nullptr;
    mTail = buffer;
}

template<typename T>
void Yuha::DoubleLinkedList<T>::popfront()
{
    if (mHead == nullptr)
        return;
    
    DoubleNode<T>* buffer = mHead->mNext;
    delete mHead;
    buffer->mPrev = nullptr;
    mHead = buffer;
}

template <typename T>
void Yuha::DoubleLinkedList<T>::print()
{
    DoubleNode<T>* traverse = mHead;
    while (traverse != nullptr)
    {
        std::cout << traverse->mValue << "-> ";
        traverse = traverse->mNext;
    }
    std::cout << "END" << std::endl;
}

template <typename T>
void Yuha::DoubleLinkedList<T>::printReverse()
{
    DoubleNode<T>* traverse = mTail;

    while(traverse != nullptr)
    {
        std::cout << traverse->mValue << "-> ";
        traverse = traverse->mPrev;
    }

    std::cout << "END" << std::endl;
}

template <typename T>
void Yuha::DoubleLinkedList<T>::deleteNode(DoubleNode<T>* pNode)
{
    DoubleNode<T>* traverse = mHead;

    while (traverse != nullptr)
    {
        if (traverse == pNode)
        {
            if (traverse->mPrev != nullptr)
            {
                traverse->mPrev->mNext = traverse->mNext;
            }

            if (traverse->mNext  != nullptr)
            {
                traverse->mNext->mPrev = traverse->mPrev;
            }

            delete traverse;

            break;
        }
    }
}


template <typename T>
Yuha::DoubleLinkedList<T>::~DoubleLinkedList()
{
    DoubleNode<T>* traverse = mHead;
    
    while (traverse != nullptr)
    {
        DoubleNode<T>* buffer = traverse->mNext;
        delete traverse;
        traverse = buffer;
    }

    mHead = nullptr;
    mTail = nullptr;
}













