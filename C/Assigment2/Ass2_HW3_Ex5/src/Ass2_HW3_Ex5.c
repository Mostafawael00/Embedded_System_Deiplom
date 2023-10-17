/*
 ============================================================================
 Name        : Ass2_HW3_Ex5.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to search an element in array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int array [100];
	int data;
	int n_data;


	printf("Enter No of elements : ");
	scanf("%d" , &n_data);

	for (int i=0 ; i< n_data ; i++)
	{
		scanf ("%d" , &array[i]);
	}

	for (int i=0 ; i< n_data ; i++)
	{
		printf ("%d \t" , array[i]);
	}



	printf("\nEnter Elements to be Searched : \n");
	scanf("%d" , &data);

	for (int i=0 ; i< n_data ; i++)
	{
		if (array[i] == data)
		{
			printf ("Number found at location %d " , i+1);
			break;

		}
	}

	return 0;
}
