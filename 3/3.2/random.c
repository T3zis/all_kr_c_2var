#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "entering_variables_char.h"
/*Для изменения количества элементов массива измените значение константы*/
#define symbols_array 8
/*Ищем остаток от деления на 10 чтобы уменьшить число*/
#define RANDOM_DELIM (rand()%10)


void _random(void)
{
  int i = 0;
	srand(time(NULL));


  puts("Введите 8 элементов массива(Считывается только 1 элемент строки ввода)");
	unsigned char symbols[symbols_array];
	while (i < symbols_array){
		symbols[i] = RANDOM_DELIM + '0';
    printf("%d элемент массива = %c\n", i + 1, symbols[i]);
		printf("Битовое представление символа: ");
    for (int j = 7; j >= 0; j--){
  		printf("%d", (symbols[i] >> j) & 1);
    }
		puts("");
		i ++;
	}
	i = 0;
	puts("");

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

