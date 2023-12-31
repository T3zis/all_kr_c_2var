#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "entering_variables.h"


void manual_input2(void)
{
  double b = 0.0, x = 0.0, y = 0.0;
  
  puts("Введите вещественную переменную x:\n");
  
  x = get_double();
  
  puts("Введите вещественную переменную y:\n");
  
  y = get_double();
  
  if ((x / y) > 0){
    b = log(x / y) + pow((x * x + y), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }
  
  if ((x / y) < 0){
    b = log(fabs(x / y)) + pow((x * x + y), 3);
    puts("Ответ:");        
    printf("%f", b);
    puts("\n");
  }
  
  if (x == 0 && y != 0){
    b = pow((x * x + y), 3);
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }
  
  if (y == 0){
    puts("Ответ:");
    printf("%f", b);
    puts("\n");
  }
  
}