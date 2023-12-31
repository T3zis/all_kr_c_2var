#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "entering_variables_int.h"
#include "entering_variables.h"
/*
*Ищем остаток от деления на 1000 чтобы уменьшить число.
*Умножаем на 0.1 чтобы число стало вещественным.
*/
#define RANDOM_DELIM  (rand()%1000)*0.1


void random_matrix(void)
{
  int i = 0, j = 0, line = 0, column = 0, number_line = 0, number_column = 0;
  double el = 0.0, line_amount = 0.0, column_amount = 0.0;


  puts("Введите количество строк матрицы:");
  line = get_int();
  while (line < 1){
    puts("Введите число > 0:");
    line = get_int();
  }


  puts("Введите количество столбцов матрицы:");
  column = get_int();
  while (column < 1){
    puts("Введите число > 0:");
    column = get_int();
  }


  //double (*A)[column] = malloc(sizeof(double)*line*column);
  //double (*A_norm)[column] = malloc(sizeof(double)*line*column);
   double **A = NULL;
	double **A_norm = NULL;
	
	A = (double**) malloc(line * sizeof(double*));
	A_norm = (double**) malloc(line * sizeof(double*));
	 
	for (i = 0; i < line; i++) {
        A[i] = (double*) malloc(column * sizeof(double));
		A_norm[i] = (double*) malloc(column * sizeof(double));
    }

  srand(time(NULL));


  while (number_line < line){
    while (number_column < column){
      A[number_line][number_column] = RANDOM_DELIM;
      
      number_column ++;
    }

    number_line ++;
    number_column = 0;
  }
  number_column = 0;
  number_line = 0;


  while (number_line < line){
    while (number_column < column){
      while (i < column){
        line_amount += A[number_line][i];
        i ++;
      }
      i = 0;
      while (j < line){
        column_amount += A[j][number_column];
        j ++;
      }
      j = 0;
      el = line_amount / column_amount;
      line_amount = 0.0;
      column_amount = 0.0;
      A_norm[number_line][number_column] = el;
      
      number_column ++;
      el = 0;
    }

    number_line ++;
    number_column = 0;
  }
  number_line = 0;
  number_column = 0;


  /*Вывод исходной матрицы*/
  puts("Исходная матрица:");
  while (number_line < line){
    while (number_column < column){
      printf("%15f\t", A[number_line][number_column]);
      
      number_column ++;
    }
    
    puts("");
    number_line ++;
    number_column = 0;
  }


  /*Вывод нормированной матрицы*/
  number_line = 0;
  number_column = 0;
  puts("Нормированная матрица:");
  while (number_line < line){
    while (number_column < column){
      printf("%15f\t", A_norm[number_line][number_column]);
      
      number_column ++;
    }
    
    puts("");
    number_line ++;
    number_column = 0;
  }
  

  for (i = 0; i < line; i++) {
        free(A[i]);
		 free(A_norm[i]);
  }
  free(A);
	free(A_norm);

  A_norm = NULL;
  A = NULL;
}

