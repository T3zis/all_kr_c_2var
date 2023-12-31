#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "random2.h"
#include "manual_input2.h"
#include "entering_variables.h"




void main_code2(void)
{
  double random_or_manual = 0.0;

  puts("Для рандомного ввода чисел введите < 0, для ручного ввода введите >= 0:\n");
  
  random_or_manual = get_double();
  if (random_or_manual >=0){
    manual_input2();
  }
  else{
    random2();
  }
  
}