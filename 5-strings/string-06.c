/*Faca  um programa que leia uma string e imprima uma mensagem dizendo se ela eh um palindromo
ou nao.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[30], stringI[30];
	int i, j = 0;

	printf("Digite uma palavra: ");
	gets(string);

	for (i = strlen(string)-1; i >=0; i--) {
		stringI[j] = string[i];
		j++;
	}

	stringI[j] = '\0';

	if (strcmp(string, stringI) == 0) 
		printf("\nA palavra digitada eh um palindromo.\n\n");
	else 
		printf("\nA palavra digitada nao eh um palindromo.\n\n");

	return 0;
}
