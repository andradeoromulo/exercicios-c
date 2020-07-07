/* Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo: Número lido = 123. Número retornado = 321. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int inverte(num) {
	if (num/10 == 0) 
		return num;
		
	return ((num%10) * (int)pow(10, (int)log10(num))) + inverte(num/10);
}

int main() {
	int num;
	
	printf("\nDigite um numero inteiro positivo que deseja inverter: ");
	scanf("%d", &num);
	
	printf("\nOriginal: %d\nInvertido: %d\n\n", num, inverte(num));	
	
	return 0;
}

