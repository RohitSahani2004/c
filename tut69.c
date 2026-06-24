#include <stdio.h>
/* function definition  to swap the values*/
void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a = 45 , b = 39;
    printf("%d  and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}
    
