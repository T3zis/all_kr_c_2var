#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "entering_variables.h"
#include "entering_variables_int.h"
/*Для изменения количества дней поменяйте значение константы*/
#define days_array 50
/*
*Ищем остаток от деления на 1000 чтобы уменьшить числою
*Умножаем на 0.1 чтобы число стало вещественным.
*/
#define RANDOM_DELIM (rand()%1000)*0.1


void random_mas(void)
{
  int days = 0, counter_for_while = 0;
  double average_value = 0.0, deviation = 0.0, days_d = 0.0, random_array = 0.0;
  
  days = days_array;
  days_d = days_array;


  double random_array_[days_array];

  srand(time(NULL));

  while (counter_for_while < days){
    random_array = RANDOM_DELIM;
    random_array_[counter_for_while] = random_array;
    printf("Значение элемента масива № %d %f\n", counter_for_while + 1, random_array_[counter_for_while]);
    
    counter_for_while ++;
  }
  counter_for_while = 0;


  while (counter_for_while < days)
  {
    average_value += random_array_[counter_for_while];
    counter_for_while ++;
  }
  counter_for_while = 0;

  average_value /= days_d;
  puts("Среднее значение:");
  printf("%f\n", average_value);


  while (counter_for_while < days){
    deviation = random_array_[counter_for_while] - average_value;
    
    printf("Отклонение от среднего значения элемента № %d\n", counter_for_while + 1);
    printf("%f\n", deviation);
    
    counter_for_while ++;
  }
}

