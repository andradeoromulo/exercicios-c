/* Mesclando dois exerc�cios:
Crie uma fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo
do vetor. A fun��o dever� preencher os elementos de vetor com esse valor. N�o
utilize �ndices para percorrer o vetor, apenas aritm�tica de ponteiros.

Crie uma fun��o que receba como par�metro um vetor e o imprima. N�o utilize
�ndices para percorrer o vetor, apenas aritm�tica de ponteiros. */

#include <stdio.h> 
#include <stdlib.h>
#define MAX 5

void preencheVetor(char *vetor, char elemento) {
	int i = 0;
	
	while(i<MAX) {
		*vetor = elemento;
		vetor++;
		i++;
		elemento++;
	} 
}

void imprimeVetor(char *vetor) {
	int i;
	
	for (i=0; i<MAX; i++) 
		printf("\n[%d]: %c", (i+1), *(vetor+i));
}

int main() {
	char vetor[MAX], elemento = 'a';
	
	preencheVetor(vetor, elemento);
	imprimeVetor(vetor);
	
	putchar('\n');
	
	return 0;
}
