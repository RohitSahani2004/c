#include <stdio.h>
int main()
{
    int math_science = 0;
    int math = 0;
    int science = 0;

    // print the type of gift you are giving to them

if(math_science > 0)
{
    printf("gift for student who is good at both math and science : Coding kit\n");
}
else if(math > 0)
{
    printf("gift for student who is good at math : Math puzzle\n");
}
else if (science > 0)
{
    printf("gift for student who is good at science : Science experiment kit\n");

}
else{
    printf("gift for student who is not good at math and science : Board game\n");

}
  return 0;
}