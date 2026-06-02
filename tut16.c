#include <stdio.h>
int main()
{
    //print the number is greatest among three numbers
    int a, b, c;
    printf("Enter the number a ,b and c :  ");
    scanf("%d%d%d", &a,&b,&c);

    if(a > b && a > c){
        printf("The number a is greatest among three numbers\n");
    }
    else if(b > c && b > a){
        printf("The number b is greatest among three numbers\n");
    }
    else if(c > a && c > b){
        printf("The number c is greatest among three numbers\n");
    }
    else{
        printf("The numbers are equal\n");
    }

}