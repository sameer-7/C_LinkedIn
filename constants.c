#include<stdio.h>

//constant using const
const float PI = 3.14;
//Constant using preprocessor directive
# define MAX 100

void main()
{
    printf("PI %f\n",PI);
    printf("MAX %d\n",MAX);
}