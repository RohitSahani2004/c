#include <stdio.h>
#include<string.h>
struct Driver
{
  char name[34];  // String for name
  char dlNO[45];  // String for license number
  char route[47]; // String for route
  int kms;        // Float for kilometers
};
int main()
{
  struct Driver d1, d2, d3;
  printf("Enter the detail of the Drivers No.1 \n");

  printf("Enter the name of first drivers \n ");
  scanf("%s", d1.name);

  printf("Enter the dlno of first drivers \n ");
  scanf("%s", d1.dlNO);

  printf("Enter the route of first drivers \n ");
  scanf("%s", d1.route);

  printf("Enter the number of kms of first drivers \n ");
  scanf("%d", &d1.kms);

  printf("Enter the detail of the Drivers No.2 \n");
  printf("Enter the name of Second drivers \n ");
  scanf("%s", d2.name);

  printf("Enter the dlno of Second drivers \n ");
  scanf("%s", d2.dlNO);

  printf("Enter the route of Second drivers \n ");
  scanf("%s", d2.route);

  printf("Enter the number of kms of Second drivers \n ");
  scanf("%d", &d2.kms);

  printf("Enter the detail of the Drivers No.3 \n");
  printf("Enter the name of third drivers \n ");
  scanf("%s", d3.name);

  printf("Enter the dlno of third drivers \n ");
  scanf("%s", d3.dlNO);

  printf("Enter the route of third drivers \n ");
  scanf("%s", d3.route);

  printf("Enter the number of kms of third drivers \n ");
  scanf("%d", &d3.kms);

  printf("***Printing Information of these drivers***\n");
  printf("for Driver No 1:\nName is %s", d1.name);
  printf("Dl number is %s\n", d1.dlNO);
  printf("Route is %s\n", d1.route);
  printf("Kms is %d\n", d1.kms);

  printf("for Driver No 2:\nName is %s", d2.name);
  printf("Dl number is %s\n", d2.dlNO);
  printf("Route is %s\n", d2.route);
  printf("Kms is %d\n", d2.kms);

  printf("for Driver No 3:\nName is %s", d3.name);
  printf("Dl number is %s\n", d3.dlNO);
  printf("Route is %s\n", d3.route);
  printf("Kms is %d\n", d3.kms); 
  return 0;
}