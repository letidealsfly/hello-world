//
//  wei.cpp
//  Practice
//
//  Created by QinyuTang on 2017/8/31.
//  Copyright © 2017年 QinyuTang. All rights reserved.
//
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
void myswap(int &a,int &b)
{
    a=a^b;
    b=b^a;
    a=a^b;
}

int 位运算实现两数交换(int argc, const char * argv[])
{
    int a=2,b=3;
    myswap(a,b);
    cout<<"a:"<<a<<" b:"<<b<<endl;
    return 0;
}
