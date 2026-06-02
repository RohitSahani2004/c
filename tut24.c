#include <stdio.h>
int main(){
    // Print the reverse of a number
    int num,digit, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
   
    do{ 
        digit = num % 10;
        rev = rev*10 + digit;
        num = num / 10;
    }while (num > 0);
       printf("Reverse = %d", rev);

    return 0;
    


}