/*
 ============================================================================
 Name        : Ass1_Hw2_Ex2.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to check vowel or consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	char alphabet;

	printf("Enter an alphabet :");
	scanf("%c", &alphabet);


	if (alphabet == 'a' || alphabet == 'e'||alphabet == 'o' || alphabet =='i'|| alphabet =='u' ||alphabet == 'A' || alphabet =='E' ||alphabet == 'I' ||alphabet == 'O' ||alphabet == 'U')
		printf("%c is a vowel", alphabet);
	else
		printf("%c is a consonant", alphabet);







	return 0;
}
