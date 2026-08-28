#include <stdio.h>
#include <string.h>

void parser(char *string)
{
  int in = 0; // Variable to track whether we are inside the tag
  int index = 0;
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == '<')
    {
      in = 1;
      continue;
    }
    else if (string[i] == '>')
    {
      in = 0;
      continue;
    }
    if (in == 0)
    {
      string[index] = string[i];
      index++;
    }
  }
  string[index] = '\0';

  // remove the trailing spaces from the beginning
  while (string[0] == ' ')
  {
    // shift the string to the left
    for (int i = 0; i < strlen(string); i++)
    {
      string[i] = string[i + 1];
    }
  }
  // remove the trailing spaces from the end
  while(string[strlen(string) - 1] == ' ')
  {
    string[strlen(string) - 1] = '\0';
  }
}
int main()
{
  char string[] = "<h1>      this is a heading     </h1>";
  parser(string);
  printf("The parsed string is ~~%s~~", string);
  // Input:
  //<h1> this is a heading </h1>

  // output:
  // this is a heading
  return 0;
}

// #include <stdio.h>
// #include <string.h>

// void parser(char str[]) {
//     char *start = strstr(str, "<h1>");
//     char *end = strstr(str, "</h1>");

//     if (start != NULL && end != NULL) {
//         start += 4;  // Skip "<h1>"

//         while (start < end) {
//             printf("%c", *start);
//             start++;
//         }
//         printf("\n");
//     } else {
//         printf("Invalid HTML\n");
//     }
// }

// int main() {
//     char string[] = "<h1>this is a heading</h1>";

//     parser(string);

//     return 0;
// }