/*Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas. 
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i]).*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void transpor(int A[][MAX]) {
	int i, j;
	
	for (j=0; j<MAX; j++) {
		for (i=0; i<MAX; i++) printf("%d ", A[i][j]);
		putchar('\n');
	}
}

int main() {
	int A[MAX][MAX];
	int i, j;
	
	printf("\n--- MATRIZ A ---\n");
	for (i=0; i<MAX; i++) {
		for (j=0; j<MAX; j++) {
			printf("[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
		putchar('\n');
	}
	
	printf("--- MATRIZ TRANSPOSTA ---\n");
	transpor(A);
	
	return 0;
}
