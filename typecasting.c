#include<stdio.h>

void main()
{
    float num = 10.5;
    int int_num = (int)num;//Explicit typecast
    printf("%d",int_num);

    int intVal = 5;
    float floatVal = 2.5;
    // Implicit type casting: intVal is converted to float
    float add_result = intVal + floatVal;
    printf("Add Result: %.2f\n", add_result);
    float div_result = intVal/floatVal;
    printf("Div Result: %.2f\n", div_result);

    char c = 'A'; // ASCII value of 'A' is 65
    int i = 10;
    // Implicit type casting: char to int
    int sum = c + i;
    printf("Sum: %d\n", sum);
}