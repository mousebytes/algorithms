#ifndef QUEUE_SLL_H
#define QUEUE_SLL_H
#include "Node.h"
#include<iostream>

template<typename T>
class QueueSLL
{
    Node<T> *head;
    Node<T> *tail;

    public:

    QueueSLL();
    ~QueueSLL();

    void push(const T& x);
    T pop();
    const T& peek() const;
    bool isEmpty() const;

};

template<typename T>
QueueSLL<T>::QueueSLL()
{
    head = nullptr;
    tail = nullptr;
}

template<typename T>
QueueSLL<T>::~QueueSLL()
{
    while(head!=nullptr)
    {
        Node<T> *t = head;
        head = head->next;
        delete t;
    }
}

template<typename T>
void QueueSLL<T>::push(const T& x)
{
    if(isEmpty()) {head = tail = new Node<T>(x); return;}
    
    Node<T>* n = new Node<T>(x);

    
    tail->next = n;
    tail = tail->next;
}

template<typename T>
T QueueSLL<T>::pop()
{
    if(isEmpty()) {std::cerr << "cannot pop empty q"; throw std::runtime_error("cannot pop empty q");}

    T ret = head->val;
    Node<T> *t = head;

    head = head->next;

    delete t;

    if(isEmpty())
        tail = nullptr;

    return ret;
}

template<typename T>
const T& QueueSLL<T>::peek() const
{
    if(isEmpty()) {std::cerr << "cannot peek empty q"; throw std::runtime_error("cannot peek empty q");}
    return head->val;
}

template<typename T>
bool QueueSLL<T>::isEmpty() const
{
    return head == nullptr;
}


#endif