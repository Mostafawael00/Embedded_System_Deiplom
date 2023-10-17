/*
 ============================================================================
 Name        : Ass2_HW3_Ex2.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to calculate average using arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);


		float array [100];
		int n_data;
		float avg=0;

		printf("enter the number of data \n");
		scanf("%d" , &n_data);

		for (int i=0 ; i< n_data ; i++)
		{
			printf("Enter number :");
			scanf("%f" , &array[i]);
			avg+= array[i];
		}

		avg /= n_data;

		printf("average  = %.2f" , avg);







	return 0;
}
