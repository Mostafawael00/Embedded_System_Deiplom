/*
 ============================================================================
 Name        : Ass2_HW3_Ex6.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to find the frequency of character in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);


		char str[100];
		char character;
		int repeats=0;
		int i=0;

		printf("Enter a string : ");
		gets(str);


		printf("Enter a character to find frequency : ");
		scanf("%c" , &character);


		while (str [i] != '\0')
		{

			if (str [i] == character)
				repeats++;
			i++;
		}

		printf("frequency of %c = %d " , character , repeats);


	return 0;
}
