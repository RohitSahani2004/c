#include <stdio.h>
// Function call without argument and without return value

// Find the sum of two numbers using function in C programming
void sum()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("The sum is: %d\n", a + b);
}
int main()
{
    sum(); // Function call without arguments and without return value
    return 0;
}