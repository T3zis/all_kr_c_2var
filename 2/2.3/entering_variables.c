#include <stdio.h>


double get_double(void)
{
  double input = 0.0;

  while (!scanf("%lf", &input)){
    while (getchar() != '\n');
    puts("Ошибка ввода. Введите вещественное число.");
  }

  while (getchar() != '\n');

  return input;
}

