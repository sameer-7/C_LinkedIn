#include<stdio.h>

void main()
{
    printf("For Loop\n");
    for(int i=1;i<=5;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    int j=1;
    printf("While Loop\n");
    while(j<=5)
    {
        printf("%d ",j);
        j=j+1;
    }
    printf("\n");

    int k=1;
    printf("Do-While Loop\n");
    do
    {
        printf("%d ",k);
        k=k+1;
    }
    while(k<=5);
}