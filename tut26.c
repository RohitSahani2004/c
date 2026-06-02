#include <stdio.h>
int main()
{
    // palindrome using do while loop
    int num, rev = 0, temp, rem;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        temp = num;
        rev = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if (num == rev)
            printf("The number is palindrome");
        else
            printf("The number is not palindrome");

    } while (0); 
    
    return 0;
}