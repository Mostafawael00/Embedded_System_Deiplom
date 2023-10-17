/*
 ============================================================================
 Name        : Ass2_HW3_Ex3.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to find transpose of a matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);


		int matrix1[20][20];
		int matrix2[20][20];


		int r,c;

		printf("Enter rows and column of matrix :");
		scanf("%d%d" , &r,&c);

		printf("Enter Elements of matrix : \n");

		for (int i =0 ; i<r ; i++)
		{
			for (int j=0 ; j<c ; j++)
			{
			printf("Enter Element a%d%d",i+1,j+1);
			scanf("%d" , &matrix1[i][j]);
			}
		}


		printf("Entered Matrix : \n");
		for (int i =0 ; i<r ; i++)
				{
					for (int j=0 ; j<c ; j++)
					{
					printf("%d \t" , matrix1[i][j]);
					}
					printf("\n");
				}

		printf("Transposed  Matrix : \n");
				for (int i =0 ; i<c ; i++)
						{
							for (int j=0 ; j<r ; j++)
							{
							printf("%d \t" , matrix2[i][j] = matrix1[j][i]);
							}
							printf("\n");
						}










 	return 0;
}
