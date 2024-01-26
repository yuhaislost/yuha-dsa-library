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
        T* mNext;
        T* mPrev;
        T mValue;
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


}