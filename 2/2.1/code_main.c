#include <stdio.h>
#include <math.h>

void value_calculation(void)
{
  double count = 0.0, summa = 0.0, k = 0.0, a_i = 0.0, a_i_minus_1 = 0.0, a_i_minus_2 = 0.0, a1 = 0.0, a2 = 0.0;
  count = 2.0, summa = 3.14 + 1.57, k = sqrt(3.14 * 3.14 + 1.57 * 1.57), a2 = 1.57, a1 = 3.14;


  a_i_minus_1 = a2;
  a_i_minus_2 = a1;


  while (count != 50){
    
    a_i = 2 * sin(k * a_i_minus_1) + 3 * cos(k * a_i_minus_2);
    
    summa += a_i;
    count ++;
    a_i_minus_2 = a_i_minus_1;    
    a_i_minus_1 = a_i;
  }


  printf("%f", summa);
  printf("\n");
}

