#pragma once
#include <utility>

namespace Yuha {
    
    template<typename T>
    struct SingleNode {
        SingleNode<T>* mNext;
        T mValue;

        SingleNode();
    };

    template<typename T>
    struct DoubleNode {
        SingleNode<T>* mNext;
        SingleNode<T>* mPrev;
        T mValue;

        DoubleNode();
    };
    

    template <typename T>
    class SingleLinkedList {

        public:
            SingleLinkedList();

            const SingleNode<T>* insertFront(const T& pData);
            const SingleNode<T>* insertBack(const T& pData);
            const SingleNode<T>* insertFront(T&& pData);
            const SingleNode<T>* insertBack(T&& pData);
            const SingleNode<T>* peakFront() const;
            SingleNode<T>* peakFront();
            const SingleNode<T>* peakBack() const;
            SingleNode<T>* peakBack();
            const SingleNode<T>* findValue(const T& pValue) const;
            SingleNode<T>* findValue(const T& pValue);
            void popback();
            void popfront();

            void print();

            ~SingleLinkedList();

        private:

            SingleNode<T>* mHead;
            SingleNode<T>* mTail;

    };

    template <typename T>
    class DoubleLinkedList {

        public:
            DoubleLinkedList();

            const DoubleNode<T>* insertFront(const T& pData);
            const DoubleNode<T>* insertBack(const T& pData);
            const DoubleNode<T>* insertFront(T&& pData);
            const DoubleNode<T>* insertBack(T&& pData);
            const DoubleNode<T>* peakFront() const;
            DoubleNode<T>* peakFront();
            const DoubleNode<T>* peakBack() const;
            DoubleNode<T>* peakBack();
            const DoubleNode<T>* findValue(const T& pValue) const;
            DoubleNode<T>* findValue(const T& pValue);
            void deleteNode(DoubleNode<T>* pNode);
            void popback();
            void popfront();

            void print();
            void printReverse();

            ~DoubleLinkedList();

        private:

            DoubleNode<T>* mHead;
            DoubleNode<T>* mTail;

    };


}