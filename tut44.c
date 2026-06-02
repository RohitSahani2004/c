#include <stdio.h>
int main(){

    // WAP to print numbers  1 to 100 and stop at 50
    int i;

    for(i = 1; i <=100; i++){
        if(i == 51){
            break;
        }
        printf("%d\n", i);

        
    }
    return 0;
  
}