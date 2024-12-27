#include<stdio.h>

struct Person
    {
        char name[50];
        int age;
    };

void main()
{
    // Create an instance of struct
    struct Person p1;
    strcpy(p1.name,"CProgram");
    p1.age = 30;

    printf("Person name : %s\n",p1.name);
    printf("Person age : %d",p1.age);

    struct Person p2 = {"C++",23};
    printf("Person name : %s\n",p2.name);
    printf("Person age : %d",p2.age);
}