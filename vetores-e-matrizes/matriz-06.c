/* Fa�a uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que n�o pertencem � diagonal principal nem � diagonal secund�ria. */

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
			
			/*um elemento pertence � diagonal principal quando a linha e coluna (i e j) s�o iguais. 
			um elemento pertence � diagonal secund�ria quando a linha mais a coluna (i e j) � equivalente a LEN-1*/
			if ((i!=j) && (i+j != LEN-1)) soma += matriz[i][j];
		}
		putchar('\n');
	}
	
	printf("Soma dos elementos fora das\ndiagonais principal e secundaria: %d.\n\n", soma);	
	
	return 0;
}
