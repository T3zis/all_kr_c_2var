#include <stdio.h>
#include "entering_variables.h"
#include "manual.h"
#include "random.h"


void main_code(void)
{
  double choice_random_or_manual = 0.0;

  puts("Для ручного ввода введите число >= 0, для рандомного ввода < 0:");
  choice_random_or_manual = get_double();

  if (choice_random_or_manual >= 0){
    manual();
  }
  else{
    _random();
  }
}

