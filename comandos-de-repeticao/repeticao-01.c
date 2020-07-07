/* Fa�a um programa que leia um numero inteiro, maior ou igual a zero, do usuario.
Imprima o en�simo termo da sequ�ncia de Fibonacci. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n; //posi��o at� a qual ser� lida
	int seq = 1, seqA = 0, seqAux; //variaveis para armazenar o numero atual e anterior da sequ�ncia, e uma auxiliar para trocar esses valores
	
	printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
	scanf("%d", &n);
	
	printf("\n0 ");
	n--;
	
	while (n) {
		printf("%d ", seq);
		seqAux = seq;
		seq += seqA;
		seqA = seqAux;
		n--;
	}	  
	
	printf("\n\n");
	
	return 0;
}
