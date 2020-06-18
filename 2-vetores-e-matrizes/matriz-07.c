/* Faça uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que pertencem à diagonal principal ou à diagonal secundária.
Calcule também a soma dos elementos que não pertencem a nenhuma das diagonais.
Imprima na tela a diferença entre os dois valores. */

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
			
			/*um elemento pertence à diagonal principal quando a linha e coluna (i e j) são iguais. 
			um elemento pertence à diagonal secundária quando a linha mais a coluna (i e j) é equivalente a LEN-1*/
			if ((i==j) || (i+j == LEN-1)) somaDiagonais += matriz[i][j];
			else somaResto += matriz[i][j];
		}
		putchar('\n');
	}
	
	printf("Soma das diagonais: %d.\n", somaDiagonais);	
	printf("Soma do resto: %d.\n\n", somaResto);	
	printf("Diferença: %d.\n\n", (somaDiagonais-somaResto));
	
	return 0;
}
