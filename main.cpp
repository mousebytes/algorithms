#include<iostream>
#include "include/StackArray.h"

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

int main(void)
{
    std::cout << "main loaded\n";

    StackArrayTest();




    return 0;
}

