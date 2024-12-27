//if else switch
#include<stdio.h>

void main()
{
    int number=10;
    if(number % 2 ==0)
    {
        printf("%d is even.\n",number);
    }
    else if(number == 0)
    {
        printf("%d is zero.\n",number);
    }
    else
    {
        printf("%d is not even.\n",number);
    }
}