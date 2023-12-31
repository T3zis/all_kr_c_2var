#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES

void value_calculation(void)
{
  double e = exp(1), y = 0.0, start = -0.785398165, finish = 0.785398165, h = 0.157079633;

  while (start < finish){
    if (start < 0){
      y = (pow(e , start) * (1 + sin(start)))/(1 + cos(start));
      
      printf("x=%f ", start);
      printf("y=%f\n", y);

      start += h;
    }
    else{
      y = pow(e, start) * tan(start/2);

      printf("x=%f ", start);
      printf("y=%f\n", y);

      start += h;
    }
  }
}