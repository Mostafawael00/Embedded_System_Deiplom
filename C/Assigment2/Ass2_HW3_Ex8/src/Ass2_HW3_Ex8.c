/*
 ============================================================================
 Name        : Ass2_HW3_Ex8.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C program to reverse the string without using library function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
			setvbuf(stdout, NULL, _IONBF, 0);
			setvbuf(stderr, NULL, _IONBF, 0);


	char str1[100];
	char str2[100];
	char len=0;
	int i=0 ,j;



	printf("Enter a string : ");
	gets(str1);


	while (str1 [i] != '\0')
	{
		len++;
		i++;
	}


	for ( i=len-1 , j=0 ; i>=0 ; i-- , j++)
	{
		str2[j]= str1[i];
	}
	str2[j] = '\0';



		printf("reversed srting  %s" , str2);







	return 0;
}
