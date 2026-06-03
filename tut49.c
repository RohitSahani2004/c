// Function usage in C programming
#include <stdio.h>
int sum(int a, int b); // Function declaration (prototype) for the sum function
void printstar(int n)  // Function declaration (prototype) for the printstar function
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("%c", '*');
}
// int main()
// {
//     // Function call with argument and without return value
//     int a, b, c;
//     a = 4;
//     b = 8;
//     c = sum(a, b); // Function call with arguments a and b
//     printstar(7);  // Function call to print 7 stars

//     // printf("The sum  is : %d\n", c); // Output the result of the function call
//     return 0;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }

// Function call wihtout argument and with return value
int takenumber(); // Function declaration (prototype) for the takenumber function
int takenumber()
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 6;
    b = 4;
    // c = sum(a, b);                                 // Function call with arguments a and b
    // printstar(7);                                  // Function call to print 7 stars
    c = takenumber();                              // Function call to take a number from the user and return it
    printf("The number you entered is : %d\n", c); // Output the result of the function call
    return 0;
}