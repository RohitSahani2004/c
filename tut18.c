#include <stdio.h>
int main()
{   // Print the result of a simple calculator using switch case
    int a, b;
    char operator;
    printf("Enter two number and operator : ");
    scanf("%d %d %c", &a, &b, &operator);

    switch (operator)
    {
    case '+':
        printf("Enter a and b : %d + %d = %d", a, b, a+b);
        break;
        case '-':
            printf("Enter a and  b : %d - %d = %d", a, b, a-b);
            break;
            case '*':
                printf("Enter a and b : %d * %d = %d", a, b, a*b);
                break;
                case '/':
                    printf("Enter a and b : %d / %d = %d", a, b, a/b);
                    break;
                    default:
                    printf("Invalid number");
                     
    }
}  
        
