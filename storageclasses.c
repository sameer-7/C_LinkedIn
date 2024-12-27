//scope and lifetime of variable 
//auto register static extern
#include <stdio.h>

void function();

void main()
{
    function();
}
void function()
{
    //retains its value between function calls
    static int count =0;
    count++;
    printf("%d\n",count);
}

//auto
#include <stdio.h>

void function() {
    auto int a = 10; // 'auto' is optional, as it is the default
    printf("Inside function: a = %d\n", a);
}

int main() {
    function();
    // printf("%d", a); // Error: 'a' is not accessible here
    return 0;
}


//register
#include <stdio.h>

void function()
{
    register int count = 0; // Register variable
    for (count = 0; count < 5; count++)
    {
        printf("Count: %d\n", count);
    }
    // printf("%p", &count); // Error: Cannot take the address of a register variable
}

int main() 
{
    function();
    return 0;
}

// file1.c
#include <stdio.h>

int globalVar = 100; // Global variable

void display() 
{
    printf("Global Variable: %d\n", globalVar);
}

// file2.c
#include <stdio.h>

// Declare the external variable
extern int globalVar; 

void modify()
{
    globalVar = 200; // Modify the global variable
}

// main.c
#include <stdio.h>

// Declare the external variable
extern int globalVar;

void display(); // Function prototype
void modify();  // Function prototype

int main() 
{
    display();    // Output: Global Variable: 100
    modify();
    display();    // Output: Global Variable: 200
    return 0;
}

