#include <stdio.h>


int get_int(void)
{
  int input = 0;

  while (!scanf("%d", &input)){
    while (getchar() != '\n');
    puts("Ошибка ввода. Введите целое число.");
  }

  while (getchar() != '\n');

  return input;
}

