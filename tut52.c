#include <stdio.h>
// Function call with argument and without return value
// Check whether a number is Even or Odd

void checkEvenorOdd(int n)
{
    if (n % 2 == 0)
    
        printf("The number is Even\n");
    
    else
    
        printf("The number is Odd\n");
    }
    int main(){
        int num;

        printf("Enter a number : ");
        scanf("%d", &num);

        checkEvenorOdd(num); // Function call with argument num and without return value
        return 0;
}
