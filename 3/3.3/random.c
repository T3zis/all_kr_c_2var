#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "func_fold.h"
#include "func_sum.h"
#include "entering_variables_int.h"
/*Ищем остаток от деления на 1000 чтобы уменьшить число.*/
#define RANDOM_DELIM  (rand()%1000)


void _random(void)
{
  int amount_of_numbers = 0, i = 0, sum_array = 0;
  
  
  srand(time(NULL));


  puts("Введите количество элементов в массиве:");
  amount_of_numbers = get_int();


  while (amount_of_numbers <= 0)
  {
    puts("Введите число > 0 для значения массива:");
    amount_of_numbers = get_int();
  }
  
  
  int (*Array) = malloc(sizeof(int)*amount_of_numbers);


  while (i < amount_of_numbers){
    Array[i] = RANDOM_DELIM;
    printf("%d элемент массива = %d\n", i + 1, Array[i]);
    i++;
  }


  sum_array = fold(Array, amount_of_numbers, sum);
  printf("Сумма = %d\n", sum_array);

  
  free(Array);
  Array = NULL;
}

