#include <stdio.h>
int main()
{
    int age;
    printf("Enter the number :  ");
    scanf("%d", &age);

    switch(age)
{
    case 24:
        printf("Your age is 24\n");
        break;
    case 20:
        printf("Your age is 20\n");
        break;
        case 18:
              printf("Your age is 18\n");
              break;
                default:
                    printf("Your age is not 18,20,24\n");
                    break;

}
}