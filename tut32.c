#include <stdio.h>
int main(){
     
    int n, i = 2;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(i < n){
        if(n % i == 0){
            printf("The number is not prime");
            break;
        }
        i++;
     }
    if(i == n)
    printf("The number is prime");

    return 0;
}