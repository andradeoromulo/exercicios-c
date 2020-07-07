/* Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e imprima
a matriz B, sendo B = A^2.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LEN 5

void imprimirMatriz(int matriz[][LEN]);

int main() {
	int matrizA[LEN][LEN], matrizB[LEN][LEN];
	int i, j;;
	
	putchar('\n');
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matrizA[i][j]);
			
			//criando matriz b
			matrizB[i][j] = pow(matrizA[i][j], 2); 
		}
		putchar('\n');
	}
	
	printf("\n--- MATRIZ A ---\n");
	imprimirMatriz(matrizA);
	
	printf("\n--- MATRIZ B ---\n");
	imprimirMatriz(matrizB);
	
	putchar('\n');
	
	return 0;
}

void imprimirMatriz(int matriz[][LEN]) {
	int i, j;
	
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("%d ", matriz[i][j]);
		}
		putchar('\n');
	}
}
