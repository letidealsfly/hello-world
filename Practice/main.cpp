//
//  main.cpp
//  Practice
//
//  Created by QinyuTang on 2017/4/24.
//  Copyright © 2017年 QinyuTang. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void show( int m)
{
    // char a[3][5];
    
    char *a=(char *)malloc((4*m/2+m)*(4*m+m));
    int i,j,k;
    
    for(k=0;k<(4*m/2+m);k++)
        
        for(i=0;i<(4*m+m);i++)
            
            *(a+k*(4*m+m)+i)=' ';
    
    
    
    
    for(i=0;i<=(4*m/2);i++)
        * (a+i+((4*m/2)-i)*(4*m+m))='*';
    
    for(j=(4*m/2);j<=4*m;j++)
        *(a+j+(j-(4*m/2))*(4*m+m))='*';
    
    
    
    for(k=0;k<(4*m/2+1);k++)
    {
        for(i=0;i<(4*m+m);i++)
        {
            printf("%c",*(a+(k*(4*m+m))+i));
        }
        printf("\n");
    }
    
    
}

int main(int argc, const char * argv[])
{
    int num;
    int b;
    printf("please input one number:");
    scanf("%d",&num);
    show(num);
    while(num)
    {
        for(b=0;b<6;b++)
        {
            sleep(1);
            show(b);
        }
        for(b=6;b>=0;b--)
        {
            sleep(1);
            show(b);
        }
        exit(1);
    }
    return 0;
}

