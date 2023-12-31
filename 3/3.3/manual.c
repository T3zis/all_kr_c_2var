#include <stdio.h>
#include <stdlib.h>
#include "entering_variables_int.h"
#include "func_fold.h"
#include "func_sum.h"


void manual(void)
{
  int amount_of_numbers = 0, i = 0, sum_array = 0;
  
  
  puts("Введите количество элементов в массиве:");
  amount_of_numbers = get_int();
  
  
  while (amount_of_numbers <= 0)
  {
    puts("Введите число > 0 для значения массива:");
    amount_of_numbers = get_int();
  }


  int *Array = malloc(sizeof(int)*amount_of_numbers);


  while (i < amount_of_numbers){
    printf("Введите значение для %d элемента массива\n", i + 1);
    Array[i] = get_int();
    i ++;
  }


  sum_array = fold(Array, amount_of_numbers, sum);
  printf("Сумма = %d\n", sum_array);


  free(Array);
  Array = NULL;
}

