#include <stdio.h>
#include <stdlib.h>   // needed for calloc, realloc, free

int main() {
    int *ptr;
    int n;

    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Enter the size of the new array you want to create: ");
    scanf("%d", &n);

    int *temp = (int *)realloc(ptr, n * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(ptr);          // original block is still valid, so free it
        return 1;
    }
    ptr = temp;             // only now is it safe to overwrite ptr

    for (int i = 0; i < n; i++) {
        printf("Enter new value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }

    free(ptr);
    ptr = NULL;             // good habit: avoids a dangling pointer
    return 0;
}