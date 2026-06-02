#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, 3);
        temp = temp / 10;
    }

    if(sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}