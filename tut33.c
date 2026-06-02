#include <stdio.h>
#include <math.h>
// Print whether the number is Armstrong or not
int main()
{
    int num,OriginalNum,digit;
    int sum  = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    OriginalNum = num;


    do
    {
        digit = num % 10;
        sum += digit*digit*digit ;
        num = num / 10;
    } while(num > 0);

    if(sum == OriginalNum)
        printf("%d is an Armstrong Number", OriginalNum);
    else
        printf("%d is not an Armstrong Number", OriginalNum);

    return 0;
}