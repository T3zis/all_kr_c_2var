/*Задание 1 контрольной работы № 1
*Выполнил: Щербаков Сергей Игоревич
*Группа: 4304
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "entering_variables.h"
#include "restart1.h"
#include "main_code1.h"


int main(void)
{
  setlocale(LC_CTYPE, "RU");

  puts("**************************\n"
		"*Доброго времени суток!  *\n"
		"*Щербаков Сергей Игоревич*\n"
		"*Группа № 4304 Вариант №2*\n"
		"*Задание №1 К.р. №1      *\n"
		"**************************\n");

  main_code1();

  rest();

  return EXIT_SUCCESS;

}