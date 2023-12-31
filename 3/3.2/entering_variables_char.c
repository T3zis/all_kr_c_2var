#include <stdio.h>


char get_char(void)
{
  char input;


  while (!scanf("%1c", &input)){
    while (getchar() != '\n');
  }

  while (getchar() != '\n');

  return input;
}

