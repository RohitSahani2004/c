#include <stdio.h>
int main(){
    //print number from 1 to N using for loop
    int i;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%d ", i);
    }
    return 0;
}