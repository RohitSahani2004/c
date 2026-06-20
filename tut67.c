#include <stdio.h>

  /* Call by Referece*/ // used for copies of argument uses in that function and uses address if argument for call 

    // WAP to swap the to number using call by Refernce
 
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