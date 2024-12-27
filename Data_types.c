//int char float double
#include<stdio.h>

int main()
{
    int age = 25;
    char grade = 'A';
    float height = 5.9;
    double pi = 3.14159;

    printf("%d int\n",age);
    printf("%c char\n",grade);
    printf("%f float\n",height);
    printf("%f double\n",pi);

    printf("%d size of int\n",sizeof(age));
    printf("%d size of char\n",sizeof(grade));
    printf("%d size of float\n",sizeof(height));
    printf("%d size of double\n",sizeof(pi));
    //printf("%d size of null char\n",sizeof('\0'));
    
    return 0;
}