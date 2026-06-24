/* Give two number a and b , add them then subtract them and assign them to a and b using call by reference*/
#include <stdio.h>
void calculation(int *a, int *b){
    int sum = *a + *b;
    int diff = *a - *b;
    *a = sum;
    *b = diff;
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a and b is %d and %d\n", a, b);
    calculation(&a,&b);
    printf(" The sum of a and b is %d and diff is %d", a, b);
    return 0;
}