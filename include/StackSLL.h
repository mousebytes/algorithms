#ifndef STACK_SLL_H
#define STACK_SLL_H

#include "Node.h";
#include<iostream>
#include<stdexcept>

template<typename T>
class StackSLL
{
    public:

    Node<T> *root;

    StackSLL()
    {
        root = nullptr;
    }

    void push(T x)
    {
        Node<T> *n = new Node(x); // local ptr that is removed from stack after out of scope
        n->next = root;
        root = n;
    }

    T pop()
    {
        if(root==nullptr)
        {
            std::cerr << "\ncannot pop an empty stack\n";
            throw std::runtime_error("\ncannot pop an empty stack\n");
        }

        T x = root->val;

        // local ptr on pop fun stack that is removed when out of scope
        Node<T> *t = root;

        root = root->next;

        delete t;

        return x;
    }

    T peek()
    {
        if(root==nullptr)
        {
            std::cerr << "\ncannot peek an empty stack\n";
            throw std::runtime_error("\ncannot peek an empty stack\n");
        }

        return root->val;
    }

    void clearStack()
    {
        Node<T> *t = root;
        while(root!=nullptr)
        {
            t = root;
            root = root->next;
            delete t;
        }
    }

    ~StackSLL()
    {
        clearStack();
    }

};


#endif