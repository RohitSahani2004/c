#include <stdio.h>
#include <string.h>
struct student
{
  int id;
  int marks;
  char fav_char;
  char name[34];
};
 

int main()
{
  struct student rohit, rahul, nitish;
  rohit.id = 2;
  rahul.id = 6;
  nitish.id = 8;
  rohit.marks = 80;
  rahul.marks = 75;
  nitish.marks = 65;
  rohit.fav_char = 'r';
  rahul.fav_char = 'l';
  nitish.fav_char = 'h';
  strcpy(rohit.name, "rohit sahani student of the year");
  printf("rohit's name is: %s\n", rohit.name);
  printf("rohit college id %d\n", rohit.id);
  printf("rohit got %d marks\n", rohit.marks);
  printf("rohit favourate character %c\n" , rohit.fav_char);

  printf("rahul college id %d\n", rahul.id);
  printf("rahul got %d marks\n", rahul.marks);
  printf("rahul favourate character %c\n", rahul.fav_char);

  printf("nitish college id %d\n", nitish.id);
  printf("nitish got %d marks\n", nitish.marks);
  printf("nitish favourate character %c\n", nitish.fav_char);

}
