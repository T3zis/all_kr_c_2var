#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "entering_variables.h"
#include "main_code2.h"


void rest(void)
{
  double restart = 0.0;

  puts("Для запуска программы повторно введите чило >= 0, для завершения введите чилсо <0:");

  restart = get_double();

  while (restart >= 0){
    main_code2();
    
    puts("Для запуска программы повторно введите чило >= 0, для завершения введите чилсо <0:");

    restart = get_double();
  }
   
}