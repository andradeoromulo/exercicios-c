/* Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas e seis colunas. 
Essa função deve retornar, por referência, a soma dos elementos da sua diagonal principal e da sua diagonal secundária. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 6

void calcularSomatorio(int A[][MAX], int *somaP, int *somaS) {
	int i, j;
	
	for (j=0; j<MAX; j++) {
		for (i=0; i<MAX; i++) {
			if (i == j) *somaP += A[i][j]; //elemento pertence a diagonal principal
			if (MAX == i+j+1) *somaS += A[i][j]; //elemento pertence a diagonal secundaria 
		}
	}
}

int main() {
	int A[MAX][MAX];
	int somaP=0, somaS=0;
	int i, j;
	
	printf("\n--- MATRIZ A ---\n");
	for (i=0; i<MAX; i++) {
		for (j=0; j<MAX; j++) {
			printf("[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
		putchar('\n');
	}
	
	printf("--- CALCULOS ---\n");
	calcularSomatorio(A, &somaP, &somaS);
	printf("Soma da diagonal principal: %d.\n", somaP);
	printf("Soma da diagonal secundaria: %d.\n\n", somaS);
	
	return 0;
}
