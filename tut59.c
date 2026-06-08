#include <stdio.h>
int main()
{
    // int a = 35;
    // int* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);
    // printf("%d\n", ptra+2);
    // return 0;

    //  char a = '3';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);
    // printf("%d\n", ptra+2);
    // return 0;

    int arr[] = {1, 2, 3, 4, 56, 6, 7, 9};
    int *arrayptr = arr;
    printf("The addres of first element is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of second element of the array is %d\n", arr);
    printf("The address of first element of the array is %d\n", &arr[1]);
    printf("The address of first element of the array is %d\n", arr + 1);
    printf("The address of first element of the array is %d\n", &arr[2]);
    printf("The address of first element of the array is %d\n", arr + 2);

    printf("The addres of first element is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", *(&arr[0]));
    printf("The address of second element of the array is %d\n", arr[0]);
    printf("The address of first element of the array is %d\n", *(&arr[1]));
    printf("The address of first element of the array is %d\n", arr[1]);
    printf("The address of first element of the array is %d\n", *(arr + 1));

    return 0;
}