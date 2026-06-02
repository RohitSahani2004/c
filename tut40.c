#include <stdio.h>
int main(){

    int num, temp, digit, sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &num);
    temp = num;
    for(; num > 0; num /= 10){
        digit = num % 10;
        sum += digit*digit*digit;
    }
    if(temp == sum){
        printf("%d is an Armstrong Number", temp);
    } else {
        printf("%d is not an Armstrong Number", temp);
    }
    return 0;
}