// Find Sum of array Elements
#include <stdio.h>
int main(){

    int n[5], i, sum = 0;
    printf("Enter 5 numbers :\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        sum += n[i];
    }
printf("Sum of 5 numbers is : %d", sum);
return 0;

}