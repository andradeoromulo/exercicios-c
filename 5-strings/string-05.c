/*Faça um programa que leia uma string e a inverta. A string invertida
deve ser armazenada dentro da mesma variável. Em seguida, imprima a string invertida. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[30], stringAux[30];
	int i, j=0;
	
	printf("Digite uma palava qualquer: ");
	gets(string);
	
	strcpy (stringAux, string);
	
	for (i = strlen(stringAux)-1; i >= 0; i--) {
		string[j] = stringAux[i];
		j++;
	}
	
	printf("\nInversao: %s.\n\n", string);
	
	return 0;
}
