#include <stdio.h>
int main(){
       // WAP to print factorial of a number using for loop
       int num, fact = 1, i = 1;
       printf("Enter a number : " );
       scanf("%d", &num);

       for(i =1; i <= num; i++){
       fact = fact*i;}
       printf("Factorial of %d is %d", num, fact);

       return 0;
}