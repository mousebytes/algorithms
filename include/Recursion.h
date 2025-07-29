#ifndef RECURSION_H
#define RECURSION_H

#include<string>

namespace RecursiveFunctions
{
    int factorial(int x)
    {
        if (x <= 0) 
        {
            return 1;
        }
        else
        {
            // heavy on the stack
            // has to remember x's all the way through
            return x*factorial(x-1);
        }
    }
    std::string reverseString(std::string s)
    {
        if (s.length() <=1)
            return s;

        return reverseString(s.substr(1)) + s[0];
    }
}

#endif
