/*Crie um programa que utilize a o código de Cesar para tres posicoes.
Entre com uma string e imprima a string criptografada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[100], cripto[100];
	int i = 0;

	printf("\nDigite uma palavra ou uma frase: ");
	gets(string);

	strcpy(cripto, string);

	while (i < strlen(string)) {
		cripto[i] += 3;
		i++;
	}

	printf("Criptografia: %s\n\n", cripto);

	return 0;
}
