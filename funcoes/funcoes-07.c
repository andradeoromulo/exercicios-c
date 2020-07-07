/*Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int somarVetor(int vetor[], int i) {
	if (i == 0) return vetor[i];
	else return (vetor[i]+somarVetor(vetor, (i-1)));
} 

int main() {
	int vetor[MAX];
	int i;
	
	putchar('\n');
	
	for (i=0; i<MAX; i++) {
		printf("Informe um numero [%d]: ", (i+1));
		scanf("%d", &vetor[i]);
	}
	
	printf("\nSomatorio: %d.\n\n", somarVetor(vetor, i));
	
	return 0;
}	
