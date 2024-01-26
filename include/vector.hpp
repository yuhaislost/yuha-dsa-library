#pragma once
#include <cassert>
#include <utility>

namespace Yuha {

    template<typename T>
    class Vector{

        public:

            Vector();

            const T& push_back(const T& pValue);
            const T& push_back(T&& pValue);
            void popback();

            const T& operator[](size_t pIndex) const;
            T& operator[](size_t pIndex);


            size_t size();

            ~Vector();


        private:

            void reAllocate(size_t pNewCapacity);

        private:

            T* mData;
            size_t mSize;
            size_t mCapacity;

    };

}