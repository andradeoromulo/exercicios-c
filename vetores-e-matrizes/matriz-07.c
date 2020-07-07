/* Fa�a uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que pertencem � diagonal principal ou � diagonal secund�ria.
Calcule tamb�m a soma dos elementos que n�o pertencem a nenhuma das diagonais.
Imprima na tela a diferen�a entre os dois valores. */

#include <stdio.h>
#include <stdlib.h>
#define LEN 5

int main() {
	int matriz[LEN][LEN];
	int i, j, somaDiagonais=0, somaResto=0;
	
	putchar('\n');
	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
			
			/*um elemento pertence � diagonal principal quando a linha e coluna (i e j) s�o iguais. 
			um elemento pertence � diagonal secund�ria quando a linha mais a coluna (i e j) � equivalente a LEN-1*/
			if ((i==j) || (i+j == LEN-1)) somaDiagonais += matriz[i][j];
			else somaResto += matriz[i][j];
		}
		putchar('\n');
	}
	
	printf("Soma das diagonais: %d.\n", somaDiagonais);	
	printf("Soma do resto: %d.\n\n", somaResto);	
	printf("Diferen�a: %d.\n\n", (somaDiagonais-somaResto));
	
	return 0;
}
