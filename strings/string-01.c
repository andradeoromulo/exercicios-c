//Faça um programa que leia e imprima uma string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[100];
	
	printf("Digite uma palava ou frase qualquer: ");
	
	//formas de ler uma string
	//scanf("%s", string);
	gets(string);
	//fgets(string, 100, stdin);
	
	
	//formas de gravar/imprimir uma string
	//fputs(string, stdout);
	printf("\nVoce digitou: %s.\n\n", string);
	
	return 0;
}
