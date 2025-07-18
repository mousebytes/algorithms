#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

template<typename T>
class StackArray{
    public:
        StackArray(int size = 10);
        ~StackArray();
        void push(T val);
        T pop();
        bool empty();
        void clear();

    private:

    T* arr;
    int capacity;
    int top;

};


template<typename T>
StackArray<T>::StackArray(int size)
{
    capacity = size;
    top = -1;
    arr = new T[capacity];
}

template<typename T>
StackArray<T>::~StackArray()
{
    delete[] arr;
    arr=nullptr;
}
template<typename T>
void StackArray<T>::push(T val)
{
    if(top==capacity) {std::cerr << "\ncannot add more to stack, at capacity"; return;}

    top++;
    arr[top] = val;
}
template<typename T>
T StackArray<T>::pop()
{
    if(empty()) {std::cerr << "\ncannot remove from an empty stack"; exit(1);}

    return arr[top--];
}

template<typename T>
bool StackArray<T>::empty()
{
    return top == -1;
}

template<typename T>
void StackArray<T>::clear()
{
    top=-1;
}

#endif