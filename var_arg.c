#include<stdio.h>
#include<stdarg.h>

void printNum(int count, ...)
{
    va_list args;
    va_start(args, count);

    for(int i=0;i<count;i++)
    {
        printf("%d ",va_arg(args,int));
    }
    va_end(args);
}

void main()
{
    printNum(4, 10, 20, 30);
}