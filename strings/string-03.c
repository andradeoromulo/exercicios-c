/*Sem usar a função strlen(), faça um programa que leia uma string
e imprima quantos caracteres ela possui. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[30];
	int i, len=0;
	
	printf("Digite uma palava qualquer: ");
	gets(string);
	
	for (i=0; string[i] != '\0'; i++) len++;
	
	printf("\nA palavra possui %d caracteres.\n\n", len);
	
	return 0;
}
