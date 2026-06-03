#include <stdio.h>
int main(){
     // 1st method of typecasting
     int a = 5;
     float b = 54.67;
     printf("The value of a is %d\n ", (int)b); // typecasting
     return 0;
    // 2nd method of typecasting
     int a = 5;
     float b = (float)54/5; // typecasting using (float) before the value to be typecasted
     printf("The value of a is %f\n ", b);
     return 0;

}