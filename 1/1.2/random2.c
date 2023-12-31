#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
/*
*Ищем остаток от деления на 1000000 чтобы уменьшить числою
*Умножаем на 0.1 чтобы число стало вещественным.
*/
#define RANDOM_DELIM  (rand()%100000)*0.1

void random2(void)
{
  double b = 0.0,  x_random = 0.0, y_random = 0.0;

  srand(time(NULL));
  
  y_random = RANDOM_DELIM;

  x_random = RANDOM_DELIM;

  printf("x = %f", x_random);
  puts("\n");
  
  printf("y = %f", y_random);
  puts("\n");

  if ((x_random / y_random) > 0){
    b = log(x_random / y_random) + pow((x_random * x_random + y_random), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }
  
  if ((x_random / y_random) < 0){
    b = log(fabs(x_random / y_random)) + pow((x_random * x_random + y_random), 3);
    puts("Ответ:");        
    printf("%f", b);
    puts("\n");
  }
  
  if (x_random == 0 && y_random != 0){
    b = pow((x_random * x_random + y_random), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }

}