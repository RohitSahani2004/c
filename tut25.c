#include <stdio.h>
int main()
{
    // Print the sum of digits of a number
    int sum = 0, num, digit;
    printf("Enter a number : ");
    scanf("%d", &num);

    do
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    } while (num > 0);
    printf("sum = %d", sum);

    return 0;
}