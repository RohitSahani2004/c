#include <stdio.h>
void printStr(char str[])
{
  int i = 0;
  while (str[i] != '\0')
  {
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}
int main()
{

  // char str[] = {'R', 'o', 'h', 'i', 't', '\0'}; // This line represent how to print string
  // char str[6] = "harry"; // this line represent how to print null character in string
  char str[34];

  gets(str); // this line represent to take input by user
  printStr(str);
  printf("using puts: \n", str); // this line also represent to take input by user
  printf("Using printf %s", str);
  printf("using puts: \n");
  return 0;
}