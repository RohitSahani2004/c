#include <stdio.h>
// Function call with argument and with return value
// Find the maximum of two numbers using funtion in C programming

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b; // or return b; since both are equal
}
int main()
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d", maximum8
        (num1, num2)); // Function call with arguments num1 and num2 and with return value
    return 0;
}