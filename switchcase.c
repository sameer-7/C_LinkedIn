#include<stdio.h>
int main()
{
    char choice;
    printf("Enter character < , > , <= , >= , == , != : ");
    scanf(" %c",&choice);
    switch(choice)
    {
        case '>':
            printf("Selected Choice is >");
            break;
        case '<':
            printf("Selected Choice is <");
            break;
        case '>=':
            printf("Selected Choice is >=");
            break;
        case '==':
            printf("Selected Choice is ==");
            break;
        case '!=':
            printf("Selected Choice is !=");
            break;
    }
}