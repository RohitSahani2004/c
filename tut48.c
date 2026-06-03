#include <stdio.h>
int main()
{
    {
        // goto statement in C
    label:
        printf("we are inside the main function\n");
        goto end; // goto statement to jump to the end label
        printf("Hello World\n");
        goto label; // goto statement to jump to the label
    end:
        printf(" we are at end");

        //  goto statement using in for loop
        int num;
        for (int i = 0; i < 8; i++)
        {
            printf("%d\n", i);
            for (int j = 0; j < 8; j++)
            {
                printf("Enter the number. enter 0 to exit\n");
                scanf("%d", &num);
                if (num == 0)
                {
                    goto end; // goto statement to jump to the end label
                }
            }
        }

    end:

        return 0;
    }
}
