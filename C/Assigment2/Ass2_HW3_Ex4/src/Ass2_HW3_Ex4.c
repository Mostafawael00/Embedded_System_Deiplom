/*
 ============================================================================
 Name        : Ass2_HW3_Ex4.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to insert an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int array1[100];
	int n_data;
	int location;
	int data;


	printf("Enter No of elements : ");
	scanf("%d" , &n_data);
	for (int i=0 ; i< n_data ; i++)
	{
		scanf ("%d" , &array1[i]);
	}

	for (int i=0 ; i< n_data ; i++)
	{
		printf ("%d \t" , array1[i]);
	}



	printf("\nEnter Elements to be inserted : \n");
	scanf("%d" , &data);

	printf("Enter Location \n");
	scanf("%d" , &location);



	for (int i= n_data ; i > 0   ; i--)
	{
		array1[i+1] = array1[i];
		if (array1[i+1] == location)
			break;
	}
	array1[location-1] = data;



	printf(" elements after insert \t ");


	for (int i=0 ; i< n_data+1 ; i++)
	{
		printf ("%d \t" , array1[i]);
	}




	return 0;
}
