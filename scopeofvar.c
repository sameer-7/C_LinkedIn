#include<stdio.h>

void function();

//global variable
int globalvar = 100;

void main()
{
    printf("Global variable : %d\n",globalvar);
    //calling function
    function();
}

void function()
{
    //local variable
    int localvar=50;
    printf("Local variable : %d\n", localvar);
}