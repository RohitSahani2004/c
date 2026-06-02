#include <stdio.h>
int main(){
     
<<<<<<< HEAD
    int num, a = 0, b =  1, c, i;
=======
    int num, a = 0, b = 1 , c, i;
>>>>>>> bbf6e7b (Save current files)
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    printf("Fibonacci series : ");
    for(i = 0; i < num; i++){
<<<<<<< HEAD
        if(i <= 1){
=======
        if(i <= 1 ){
>>>>>>> bbf6e7b (Save current files)
            c = i;
        }else{
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
<<<<<<< HEAD

    
    }
=======
    }  
    
>>>>>>> bbf6e7b (Save current files)
}
