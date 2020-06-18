/* Faça uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que estão acima da diagonal principal. */

#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int main() {
	int matriz[LEN][LEN];
	int i, j, soma=0;
	
	putchar('\n');
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
			
			/*para garantir que o elemento está acima da diagonal principal,
			basta checar se a coluna é maior que a linha, pois a partir do momento
			em que forem iguais, já é a diagona secundaria. */
			if (j>i) soma += matriz[i][j];
		}
		putchar('\n');
	}
	
	printf("Soma dos elementos acima da diagonal principal: %d.\n\n", soma);	
	
	return 0;
}
