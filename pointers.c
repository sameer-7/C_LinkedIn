#include<stdio.h>

void main()
{
    int a = 10;
    //pointer to a
    int *p = &a;

    printf("Address of a : %d\n",&a);
    printf("Address of p : %d\n",&*p);
    //Dereferencing the pointer
    printf("Value of *p : %d\n",*p);
}