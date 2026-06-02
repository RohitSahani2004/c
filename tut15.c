#include <stdio.h>
int main()
{
    //print the number is Even or Odd
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("The nunber is Even \n");
    }
    else{
        printf("The number is Odd \n");
    }
    return 0;
}
