#include <stdio.h>
int main(){
    // Print the sum of first n natural numbers
    int n, i = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(i <= n){
        sum = sum + i;
        i++;
        printf("sum = %d\n", sum);
    }

}