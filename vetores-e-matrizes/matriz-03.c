/*Faca uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos
em sua diagonal secundaria. */

#include <stdio.h>
#include <stdlib.h>
#define LEN 3

int main() {
	int matriz[LEN][LEN];
	int i, j, soma = 0;

	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
			if ((LEN-j-i) == 1) soma += matriz[i][j];
		}
		putchar('\n');
	}

	printf("Soma da diagonal secundaria: %d.\n", soma);
}
