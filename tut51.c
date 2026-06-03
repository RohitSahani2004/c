#include <stdio.h>
// Function call without argument and with return value

// Find the sum of two numbers using function in C programming

int square(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    return n*n;
}
int main()
{
    int result = square();
    printf("The square of the number is : %d\n", result);
    return 0;
}