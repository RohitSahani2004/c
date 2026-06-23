#include <stdio.h>

/* Call by Reference: Passes the address of variables to a function so changes affect the original values. */

/* Program to swap two numbers using Call by Reference */

     void swap(int* a){
        *a * 34;
     }
     
int main()
{
  
    int a = 34, b = 45;
    printf("The value of a now is %d\n", a);
    swap(&a);
    printf("The value of a now is %d\n", a);

    return 0;
}