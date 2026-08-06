#include <stdio.h>
void arrayRev(int arr[])
{
  int temp;
  for (int i = 0; i < 8 / 2; i++)
  {
    // swap item arr[i] with arr[7-i]
    temp = arr[i];
    arr[i] = arr[7 - i];
    arr[7 - i] = temp;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("Before reversing  the array\n");
  for (int i = 0; i < 8; i++)
  {
    printf("The value of element %d is %d\n", i, arr[i]);
  }
  arrayRev(arr);
  printf("\n After reversing the array\n");
  for (int i = 0; i < 8; i++)
  {
    printf("The value of element %d is %d\n", i, arr[i]);
  }
  return 0;
}