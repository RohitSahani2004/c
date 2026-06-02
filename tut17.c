#include <stdio.h>
int main(){
    // Print the grade number 
    int grade;
    printf("Enter the grade number : ");
    scanf("%d", &grade);
     if(grade > 90){
        printf("The grade is A\n");
    }
    else if(grade > 80){
        printf("The grade is B\n");
    }
    else if(grade > 70){
        printf("The grade is C\n");
    }
    else if(grade > 60){
        printf("The grade is D\n");
    }
    else if (grade > 50){
        printf(" Only Pass\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}
