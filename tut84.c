#include <stdio.h>

int sum;
int myfunc(int a, int b)
{

    auto int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int sum = myfunc(5, 10);
    printf("The sum is %d\n", sum);
    return 0;
}

#include <stdio.h>

 int myfunc(int a, int b)
 {

     // auto int sum;
     extern int sum;
     // sum = a + b;
     return sum;
}
int sum = 658;
int main()
{
    int sum = myfunc(5, 10);

    printf("The sum is %d\n", sum);
    return 0;
}

#include <stdio.h>

 int myfunc(int a, int b)
 {

     // auto int myVar;
     static int myVar;
     myVar ++;
     printf("The myVar is %d\n", myVar);
     // myVar = a + b;
     return myVar;
}

int main()
{
    int myVar = myfunc(5, 10);
     myVar = myfunc(5, 10);
     myVar = myfunc(5, 10);
     myVar = myfunc(5, 10);
    // printf("The myVar is %d\n", myVar);
    return 0;
}

