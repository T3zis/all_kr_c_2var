#include <stdio.h>
#include <stdlib.h>
#include "entering_variables.h"
/*Для изменея размера матрицы поменяйте значение констант*/
#define column_array 5
#define line_array 4

void manual_mas(void)
{
  int counter = 0, c_for_printf = 0, number_column = 0, number_line = 0;

  
  double B[line_array][column_array];
  /*Ввод элементов матрицы*/
  while (number_line < 4){
    while (number_column < 5){
      printf("Введите значение элемента матрицы № %d,%d\n", number_column + 1, number_line + 1);
      B[number_line][number_column] = get_double();
      
      number_column ++;
    }

    number_line ++;
    number_column = 0;
  }


  /*Вывод исходной матрицы*/
  number_line = 0;
  number_column = 0;
  puts("Исходная матрица:");
  while (number_line < 4){
    while (number_column < 5){
      printf("%15f\t", B[number_line][number_column]);
      
      number_column ++;
    }
    
    puts("");
    number_line ++;
    number_column = 0;

  }


  number_line = 0;
  number_column = 0;


  /*Поиск максимальных элементов строк и замена первого элемента на максимальный*/
  while (number_line < 4){
    while (number_column < 5){
      if (B[number_line][number_column] > B[number_line][0]){
        B[number_line][0] = B[number_line][number_column];
      }
      number_column ++;
    }
    number_line ++;
    number_column = 0;

  }


  number_line = 0;
  /*Поиск 1 элемента со значением 0*/
  while (number_line < 4){
    if (B[number_line][0] != 0){
      counter ++;
    }
    number_line ++;
  }


  c_for_printf = counter;
  /*Вектор a*/
  double a[line_array];
  counter = 0;
  number_line = 0;



  while (number_line < 4){
    if (B[number_line][0] != 0){
      a[counter] = B[number_line][0];
      counter ++;
    }
    number_line ++;
  }


  counter = 0;
  number_line = 0;
  number_column = 0;
  

  puts("Измененная матрица:");
  while (number_line < 4){
    while (number_column < 5)
    {
      printf("%15f\t", B[number_line][number_column]);
      number_column ++;
    }
    
    puts("");
    number_line ++;
    number_column = 0;
  }


  puts("Вектор a:");
  counter = 0;
  while (counter < c_for_printf){
    printf("%15f \t", a[counter]);
    counter += 1;
  }  
  puts("");
}

