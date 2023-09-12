//
// Created by taehyuk chung on 2023-09-05.
//

#include "gcd.hpp"

int gcd(const int a, const int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}