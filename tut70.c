/* Array as a Perameter*/
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The vlaue at %d is %d\n", i, array[i]);
    }
    array[0] = 386;
    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);

    return 0;
}