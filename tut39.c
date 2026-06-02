#include <stdio.h>
int main(){
     
    int num, a = 0, b =  1, c, i;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    printf("Fibonacci series : ");
    for(i = 0; i < num; i++){
        if(i <= 1){
            c = i;
        }else{
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);

    
    }
}