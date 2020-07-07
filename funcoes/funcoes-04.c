/* Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.*/

#include <stdio.h>
#include <stdlib.h>

int somar(int n) {
	if (n == 1)
		return 1;
	else 
		return (n + somar(n-1));
}

int main() {
	int n;
	
	printf("\nAte que numero deseja somar: ");
	scanf("%d", &n);
	
	printf("\nResultado: %d.\n\n", somar(n));
	
	return 0;
}
