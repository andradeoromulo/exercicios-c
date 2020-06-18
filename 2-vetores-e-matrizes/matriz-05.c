/* Faça uma matriz que leia uma matriz de tamanho 6x6. Calcule e imprima a soma de 
elementos dessa matriz que estão abaixo da diagonal principal. */

#include <stdio.h>
#include <stdlib.h>
#define LEN 6

int main() {
	int matriz[LEN][LEN];
	int i, j, soma=0;
	
	putchar('\n');
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
			
			/*para garantir que o elemento está abaixo da diagonal principal,
			basta checar se a coluna é menor que a linha, pois a partir do momento
			em que forem iguais, já é a diagona secundaria. */
			if (j<i) soma += matriz[i][j];
		}
		putchar('\n');
	}
	
	printf("Soma dos elementos abaixo da diagonal principal: %d.\n\n", soma);	
	
	return 0;
}
