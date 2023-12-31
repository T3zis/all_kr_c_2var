/*Задание 3 контрольной работы № 1
*Выполнил: Щербаков Сергей Игоревич
*Группа: 4304
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "code3.h"

int main(void)
{
  setlocale(LC_CTYPE, "RU");

  puts("**************************\n"
		"*Доброго времени суток!  *\n"
		"*Щербаков Сергей Игоревич*\n"
		"*Группа № 4304 Вариант №2*\n"
		"*Задание №3 К.р. №1      *\n"
		"**************************\n");
  
  value_calculation();

	return EXIT_SUCCESS;

}