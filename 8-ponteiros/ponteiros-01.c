/* Crie um programa que contenha uma matriz de float contendo tr�s linhas e tr�s
colunas. Imprima o endere�o de cada posi��o dessa matriz. */

#include <stdio.h>
#include <stdio.h>

int main() {
	float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			printf("%p\n", &matriz[i][j]);
	}	
	
	putchar('\n');
	
	return 0;
}
