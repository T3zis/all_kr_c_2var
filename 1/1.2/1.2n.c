/*Задание 2 контрольной работы № 1
*Выполнил: Щербаков Сергей Игоревич
*Группа: 4304
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "restart2.h"
#include "main_code2.h"


int main(void)
{    
  setlocale(LC_CTYPE, "RU");

  puts("**************************\n"
		"*Доброго времени суток!  *\n"
		"*Щербаков Сергей Игоревич*\n"
		"*Группа № 4304 Вариант №2*\n"
		"*Задание №2 К.р. №1      *\n"
		"**************************\n");

  main_code2();

  rest();

  return EXIT_SUCCESS;
  
}