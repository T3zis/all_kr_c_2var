#include <stdio.h>
#include <stdlib.h>
#include "entering_variables_char.h"
/*Для изменения количества элементов массива измените значение константы*/
#define symbols_array 8


void manual(void)
{
  int symbols_for_print = 0, i = 0;
	symbols_for_print = symbols_array;


	printf("Введите %d значений для массива(Записывается только первый символ)\n", symbols_for_print);
	unsigned char symbols[symbols_array];
	while (i < 8){
		printf("Введите %d элемент массива: ", i + 1);
		symbols[i] = get_char();
		printf("Битовое представление символа: ");
    for (int j = 7; j >= 0; j--) {
      printf("%d", (symbols[i] >> j) & 1);
    }
		puts("");
		i ++;
	}
	puts("");
	i = 0;


	while(i < symbols_array){
		if (symbols[i] & (1 << 0)){
			symbols[i] |= (1 << 2);
			i++;
		}
		else{
			symbols[i] &= ~(1 << 3);
		i++;
		}
	}


	for (i = 0; i < symbols_array; i ++){
		printf("%d элемент = %c, OCT = %o, DEC = %d\n",i + 1, symbols[i], symbols[i], symbols[i]);
		printf("Битовое представление символа: ");
    for (int j = 7; j >= 0; j--) {
      printf("%d", (symbols[i] >> j) & 1);
    }
    puts("");
	}
}

