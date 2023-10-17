/*
 ============================================================================
 Name        : Ass2_HW3_Ex7.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to find the lenght of a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	char str[100];
	char len=0;
	int i=0;



	printf("Enter a string : ");
	gets(str);

	while (str [i] != '\0')
	{
		len++;
		i++;
	}

	printf("lenght of string = %d "  , len);




	return 0;
}
