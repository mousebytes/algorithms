#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H
#include<iostream>

template<typename T>
class QueueArray
{
    int capacity;
    T* arr;
    int curIndex;
    
    public:

    QueueArray(int size = 10);
    ~QueueArray();

    void push(T x);
    T pop();
    T peek();

};

template<typename T>
QueueArray<T>::QueueArray(int size)
{
    if(size <= 0)
    {
        std::cerr<< "\nuse a valid value";
        throw std::runtime_error("use a valid capacity value > 0");
    }

    capacity = size;
    arr = new T[capacity];
    curIndex = -1;
}

template<typename T>
void QueueArray<T>::push(T x)
{
    if(curIndex == capacity-1) {std::cerr <<"\nqueue at capacity"; throw std::runtime_error("\nqueue at capacity");}
    if(curIndex == -1) {arr[0] = x; curIndex = 0; return;}

    curIndex++;
    arr[curIndex] = x;
    
}

// current O(n) but could be improved with a head/tail -> circular array
// but i'm too lazy for that rn
template<typename T>
T QueueArray<T>::pop()
{
    if(curIndex == -1) {std::cerr<<"\nempty queue"; throw std::runtime_error("empty queue");}

    T x = arr[0];

    for(int i =0; i < curIndex; ++i)
    {
        arr[i] = arr[i+1];
    }
    curIndex--;

    return x;
}

template<typename T>
T QueueArray<T>::peek()
{
    if(curIndex == -1) {std::cerr<<"\nempty queue"; throw std::runtime_error("empty queue");}

    return arr[0];
}

template<typename T>
QueueArray<T>::~QueueArray()
{
    delete[] arr; 
    arr = nullptr;
}

#endif