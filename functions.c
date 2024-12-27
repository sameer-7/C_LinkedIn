#include<stdio.h>

int add(int a,int b);

void main()
{
    int sum = add(7,9);
    printf("%d ",sum);
}

int add(int a,int b)
{
    return a+b;
}