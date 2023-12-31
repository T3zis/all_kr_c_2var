#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
*Ищем остаток от деления на 1000000 чтобы уменьшить числою
*Умножаем на 0.1 чтобы число стало вещественным.
*/
#define RANDOM_DELIM  (rand()%100000)*0.1

void random1(void)
{
  double b = 0.0, c_random = 0.0, x_random = 0.0, y_random = 0.0;

  srand(time(NULL));
  c_random = RANDOM_DELIM;

  x_random = RANDOM_DELIM;

  y_random = RANDOM_DELIM;

  printf("x = %f", x_random);
  puts("\n");
  printf("c = %f", c_random);
  puts("\n");
  printf("y = %f", y_random);
  puts("\n");


  b = sqrt((c_random) * (sqrt(y_random) + x_random * x_random)) * (cos(x_random) - fabs(c_random - y_random));
  printf("Ответ = %f", b);
  puts("\n");

}