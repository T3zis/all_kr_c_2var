#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "entering_variables.h"


void manual_input1(void)
{
  double c = 0.0, x = 0.0, y = 0.0, b = 0.0;
  
  puts("Введите вещественную переменную c:\n");

  c = get_double();

  while ((c >= 0) != 1){
    puts("Введенное значение не соответсвует ОДЗ([0; +infinity]):\n");
    c = get_double();
  }
  
  puts("Введите вещественную переменную x:\n");
  
  x = get_double();
  
  puts("Введите вещественную переменную y:\n");
  
  y = get_double();
  
  while ((y >= 0) != 1){
    puts("Введенное значение не соответсвует ОДЗ([0; +infinity]):\n");
    y = get_double();
  }
  
  b = sqrt((c) * (sqrt(y) + x * x)) * (cos(x) - fabs(c - y));
  printf("%f", b);
  puts("\n");
  
}