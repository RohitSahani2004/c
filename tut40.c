#include <stdio.h>
int main(){

    int num, temp, digit, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;

    for(; num > 0; num /=  10){

            digit = num % 10;
            sum += digit * digit* digit;
    }
        if(sum == temp){
            printf(" Armstrong Number");
        }else
               printf(" Not an Armstrong Number");
                   return 0;
    }
        