#include<stdio.h>

struct
{
    //can store value 0-7
    unsigned int age : 3;
}person;

void main()
{
    person.age = 5;
    printf("%d\n",person.age);
}