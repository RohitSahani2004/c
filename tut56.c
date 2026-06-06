#include <stdio.h>
int main()
{
    // calculator using switch and while loop

    // 1 addition
    // 2 subtraction
    // 3 multiplication
    // 4 division

    int choice;
    float n1, n2, result;

    while (1)
    {
        printf("1. Addition.\n");
        printf("2. Subtraction.\n");
        printf("3. Multiplication.\n");
        printf("4. Division.\n");
        printf("5. Exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        break;
    }
    if (choice == 5)
    {
        printf("Existing the program...\n");
    }
    printf("Enter two numbers : ");
    scanf("%f %f", &n1, &n2);
    switch (choice)
    {
    case 1:
        result = n1 + n2;
        printf("The sum of %.2f and %.2f is %.2f\n", n1, n2, result);
        break;
    case 2:
        result = n1 - n2;
        printf("The differnce of %.2f and %,2f is %.2f\n", n1, n2, result);
        break;
    case 3:
        result = n1 * n2;
        printf("The product of %.2f and %.2f is %.2f\n", n1, n2, result);
        break;
    case 4:
        result = n1 / n2;
        printf("The division of %.2f adnd %.2f is %,2f\n", n1, n2, result);
        break;
    default:
        printf("Invalid choice.\n");
    }
}