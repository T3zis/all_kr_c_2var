#include <stdio.h>


int fold(int* array, int amount_of_numbers, int (*sum)(int, int) )
{
  int full_sum = 0, i = 0;
  while (i < amount_of_numbers){
    full_sum = sum(full_sum, array[i]);
    i++;
  }

  return full_sum;
}

