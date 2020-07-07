/*  Escreva uma função recursiva que receba um valor inteiro em base decimal e o
imprima em base binária */

#include <stdlib.h>
#include <stdio.h>

int converteBinario(int num) {
	if (num==3 || num==2)
		return (10 + (num%2));
	
	return (converteBinario(num/2)*10 + (num%2));
}

int main() {
	int num;
	
	printf("\nDigite um numero inteiro positivo que deseja converter para a base binaria: ");
	scanf("%d", &num);
	
	printf("\nBase decimal: %d\nBase binaria: %d\n\n", num, converteBinario(num));
	
	return 0;
}
