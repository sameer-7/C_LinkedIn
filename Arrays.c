#include<stdio.h>

void main()
{
    //declaring integer array with size 5
    int number[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");
    char character[5] = {'C',' ','P','r','o'};
    for(int i=0;i<5;i++)
    {
        printf("%c ",character[i]);
    }
}