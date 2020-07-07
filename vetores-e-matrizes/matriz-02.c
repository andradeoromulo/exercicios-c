/*Faca um programa que declare uma matrix de tamanho 5x5. Preencha com 1 a diagonal principal e com 0
os demais elementos. Ao final, escreva a matriz obtida na tela*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int main() {
	int matrix[LEN][LEN];
	int i, j;

	putchar('\n');

	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			matrix[i][j] = i==j ? 1 : 0;
			printf("%d ", matrix[i][j]);
		}
		putchar('\n');
	}

	putchar('\n');

}

