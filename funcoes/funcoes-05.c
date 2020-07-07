/*Crie uma função recursiva que receba um número inteiro N e 
imprima todos os números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int imprimir(int n) {
	if (n == 0) {
		printf("\n0");
		return 1;
	} else {
		printf("\n%d", imprimir(n-1));
		return n+1;
	}
} 

int main() {
	int n;
	
	printf("\nAte que numero deseja imprimir: ");
	scanf("%d", &n);
	
	imprimir(n);
	
	printf("\n\n");
	
	return 0;
}
