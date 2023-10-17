/*
 ============================================================================
 Name        : Ass2_HW3_Ex1.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to fine the sum of two matrix of order 2*2 using multi-dimension arrays where
  	  	  	   elements of matrix are entered by user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int matrix1 [2][2];
	int matrix2 [2][2];
	int sum_matrix[2][2];

	printf("enter the elements of 1st matrtix \n");

	for (int i=0 ; i< 2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
			printf("Enter a%d%d =", i+1,j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}


	printf("enter the elements of 2nd matrtix \n");

		for (int i=0 ; i< 2 ; i++)
		{
			for (int j=0 ; j<2 ; j++)
			{
				printf("Enter a%d%d =", i+1,j+1);
				scanf("%d", &matrix2[i][j]);
			}
		}


		for (int i=0 ; i<2 ; i++)
		{
			for (int j=0 ; j<2 ; j++)
			{
				sum_matrix[i][j]= matrix1[i][j] + matrix2[i][j];
			}
		}


		printf("sum of matrix1 and matrix2 is \n");
		for (int i=0 ; i<2 ; i++)
				{
					for (int j=0 ; j<2 ; j++)
					{
						printf("%d \t" , sum_matrix[i][j]);
					}
				}





	return 0;
}
