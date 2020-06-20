/*Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um valor inteiro do teclado 
e exiba o dia da semana correspondente. */

#include <stdio.h>
#include <stdlib.h>

enum semana {
	Segunda=1, Terca, Quarta, Quinta, Sexta, Sabado, Domingo
};

int main() {
	enum semana sem;
	
	printf("\nDigite um numero entre 1 e 7: ");
	scanf("%d", &sem);
	
	switch (sem) {
		case 1: printf("Segunda-feira.\n\n"); break;
		case 2: printf("Terca-feira.\n\n"); break;
		case 3: printf("Quarta-feira.\n\n"); break;
		case 4: printf("Quinta-feira.\n\n"); break;
		case 5: printf("Sexta-feira.\n\n"); break;
		case 6: printf("Sabado.\n\n"); break;
		case 7: printf("Domingo.\n\n"); break;	
		default: printf("Numero invalido.\n\n"); break;
	}
	
}
