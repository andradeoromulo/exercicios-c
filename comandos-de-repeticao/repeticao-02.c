/* Escreva um programa que leia um número inteiro positivo N e em seguida
imprima N linhas do triângulo de Floyd; */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int linhas, contLinhas; // Quantidade de linhas e contador
	int num = 1, i;
	
	printf("Quantas linhas do triangulo de Floyd deseja imprimir? ");
	scanf("%d", &linhas);
	
	putchar('\n');
	
	for (contLinhas=1; contLinhas<=linhas; contLinhas++) {
		for (i=1; i<=contLinhas; i++) printf("%d ", num++);
		putchar('\n');
	}
	
	return 0;
}
