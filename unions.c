#include<stdio.h>

union Data
{
    int intValue;
    float floatValue;
};

void main()
{
    union Data data;
    data.intValue = 5;
    printf("%d\n",data.intValue);
    data.floatValue = 2.90;
    printf("%d\n",data.floatValue);
}

// The main difference between a structure and a union is that a structure stores multiple data types of different sizes, while union stores multiple data types of the same size in the same location.