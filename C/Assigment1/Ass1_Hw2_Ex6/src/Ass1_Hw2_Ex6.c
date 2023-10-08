/*
 ============================================================================
 Name        : Ass1_Hw2_Ex6.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to calculate sum of natural numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int num , sum=0;

	printf("Enter An integer :");
	scanf("%d" , &num);


	for (int i=1 ; i<=num ; i++)
	{
		sum+=i;
	}

	printf("sum = %d " , sum);





	return 0;
}
