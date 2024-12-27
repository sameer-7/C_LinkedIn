#include<stdio.h>

void calculator();

void main()
{
    int x=10,y=20;
    printf("Sum + : %d\n",x+y);
    printf("Sub - : %d\n",x-y);
    printf("Prod * : %d\n",x*y);
    printf("Div  / : %d\n",x/y);
    printf("Rem % : %d\n",x%y);

    calculator();
}

void calculator()
{
    int a,b;char choice;
    printf("Enter value of a and b : \n");
    scanf("%d %d",&a,&b);
    printf("Entered values are : a=%d b=%d",a,b);
    printf("Choose Choice : \n+\n-\n*\n/\n%");
    scanf(" %c",&choice);
    printf("Selected choice is '%c'\n",choice);
    if(choice == '+')
    {
        printf("Sum is %d: \n",a+b);
    }
    else if(choice == '-')
    {
        printf("Sub is %d: \n",a-b);
    }
    else if(choice == '*')
    {
        printf("Prod is %d: \n",a*b);
    }
    else if(choice == '/')
    {
        printf("Div is %d: \n",a/b);
    }
    else if(choice == '%')
    {
        printf("Rem is %d: \n",a%b);
    }
    else
    {
        printf("Choice is Invalid\n");
    }
}