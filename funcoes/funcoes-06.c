/*Crie uma função recursiva que receba um número inteiro N e 
imprima todos os números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

void imprimir(int n) {
	printf("\n%d", n);
		
	if (n == 0) return;
	else imprimir(n-1);
} 

int main() {
	int n;
	
	printf("\nAte que numero deseja imprimir: ");
	scanf("%d", &n);
	
	imprimir(n);
	
	printf("\n\n");
	
	return 0;
}
