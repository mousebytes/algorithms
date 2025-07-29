#include<iostream>
#include "include/StackArray.h"
#include "include/StackSLL.h"
#include "include/QueueArray.h"
#include "include/QueueSLL.h"
#include "include/Recursion.h"

void StackArrayTest()
{
    StackArray<int> sArr(10);

    std::cout << "\nis empty? " << sArr.empty();

    for(int i =0;i<10;i++)
    {
        sArr.push(i);
    }

    std::cout << "\nis empty? " << sArr.empty();


    std::cout<<'\n'<<sArr.pop();

    sArr.clear();

    std::cout << "\nis empty? " << sArr.empty();


    std::cout<<"\nstack array test passed\n";
}

void StackSLLTest()
{
    StackSLL<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    std::cout<< s.pop();
    std::cout << s.peek();
}

void QueueArrayTest()
{
    QueueArray<int> q(5);

    
    //std::cout<< '\n' <<q.peek();
    //std::cout<< '\n' <<q.pop();

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    std::cout<< '\n' <<q.pop();
    std::cout<< '\n' <<q.pop();
    std::cout<< '\n' <<q.pop();
    std::cout<< '\n' <<q.pop();
    std::cout<< '\n' <<q.pop();

}

void QueueSLLTest()
{
    QueueSLL<int> q;

    q.push(1);
    q.push(2);
    q.push(3);



    std::cout << q.peek();
    std::cout << q.pop();
    std::cout << q.pop();
    std::cout << q.pop();
}

void RecursionTests()
{
    std::cout << RecursiveFunctions::factorial(5);
    std::cout << '\n' << RecursiveFunctions::reverseString("Hello");
}

int main(void)
{
    std::cout << "main loaded\n";

    //QueueSLLTest();

    RecursionTests();

    return 0;
}

