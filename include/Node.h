#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
    public:

    T val;
    Node<T> *next;

    Node(T x)
    {
        val=x;
        next=nullptr;
    }
    
    ~Node() {}
};


#endif