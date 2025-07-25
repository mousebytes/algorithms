#include<iostream>
#include "include/StackArray.h"
#include "include/StackSLL.h"

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

int main(void)
{
    std::cout << "main loaded\n";

    //StackArrayTest();

    StackSLLTest();


    return 0;
}

