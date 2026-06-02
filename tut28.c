#include <stdio.h>
int main(){
     // printf number from 1 to N
    int n , i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(i <= n){
       printf("%d ", i);
       i++;
    }

       return 0;
}