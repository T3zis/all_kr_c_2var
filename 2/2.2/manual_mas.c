#include <stdio.h>
#include "entering_variables.h"
#include "entering_variables_int.h"
/*Для изменения количества дней поменяйте значение константы*/
#define days_array 50


void manual_mas(void)
{
  int days = 0, counter_for_while = 0;
  double average_value = 0.0, deviation = 0.0, days_d = 0.0;
  

  days = days_array;
  days_d = days_array;


  double manual_array[days_array];


  while (counter_for_while < days){
    printf("Введите значение элемента № %d\n", counter_for_while + 1);
    
    manual_array[counter_for_while] = get_double();
    
    counter_for_while ++;
  }
  counter_for_while = 0;
  

  while (counter_for_while < days)
  {
    average_value += manual_array[counter_for_while];
    
    counter_for_while ++;
  }
  counter_for_while = 0;
  

  average_value /= days_d;
  puts("Среднее значение:");
  printf("%f\n", average_value);


  while (counter_for_while < days){
    deviation = manual_array[counter_for_while] - average_value;
    
    printf("Отклонение от среднего значения элемента № %d\n", counter_for_while + 1);
    printf("%f\n", deviation);
    
    counter_for_while ++;
  }
}

