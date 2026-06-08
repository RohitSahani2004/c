// Learning about pointer
#include <stdio.h>
int main()
{

    printf("Let's learn about pointer\n");
    int a=76;
    int* ptra = &a;
    int* ptr2a = NULL;
    printf("The address of to a is %p\n", &ptra);
    printf("The address of to a is %p\n", &a);
    printf("The address of to a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2a);
    printf("The address of a to is %d\n", *ptra);
    printf("The address of to a is %d\n", a);
    return 0;
}