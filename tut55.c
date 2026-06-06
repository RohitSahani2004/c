/*
kms to miles
inches to feet
cms to inches
pounds to kgs
inches to meters
*/

#include <stdio.h>

int main()
{

    int choice;
    float value, result;

    while (1)
    {
        printf("1. kms to miles\n");
        printf("2. inches to feet\n");
        printf("3. cms to inches\n");
        printf("4. pounds to kgs\n");
        printf("5. inches to meters\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Program Ended.\n  : ");
            break;
        }
        printf("Enter value : ");
        scanf("%f", &value);

        switch (choice)
        {
        case 1:
            result = value * 0.621371;
            printf("%.2f kms is equal to %.2f miles\n", value, result);
            break;
        case 2:
            result = value / 12;
            printf("%.2f inches is equal to %.2f feet\n", value, result);
            break;
        case 3:
            result = value * 0.393701;
            printf("%.2f cms is equal to %.2f inches\n", value, result);
            break;
        case 4:
            result = value * 0.453592;
            printf("%.2f pounds is equal to %.2f kgs\n", value, result);
            break;
        case 5:
            result = value * 0.0254;
            printf("%.2f inches is equal to %.2f meters\n", value, result);
            break;
        case 6:
            printf("Existing the program...\n");
            break;

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
