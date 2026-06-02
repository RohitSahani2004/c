#include <stdio.h>
int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >=18){
        printf("You can vote.\n");

    }
    else if (age>=10){
        printf("you are a kid.\n");

    }
    else{
        printf("You are not eligible to vote.\n");

        return 0;
    }
}
