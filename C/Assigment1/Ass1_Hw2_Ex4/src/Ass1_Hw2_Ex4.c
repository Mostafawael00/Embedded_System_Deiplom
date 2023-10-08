/*
 ============================================================================
 Name        : Ass1_Hw2_Ex4.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to check whether the number is positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	float num;

	printf("Enter a number :");
	scanf("%f", &num);

	if (num > 0)
		printf("%.2f is Positive", num );
	else if (num < 0)
		printf("%.2f is Negative" , num);
	else
		printf("You Enterd ZERO");




	return 0;
}
