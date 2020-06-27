/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos*/

#include <stdio.h>
#include <stdlib.h>

int elevarCubo(int n) {
	if (n == 1)
		return 1;
	else
		return ((n*n*n) + elevarCubo(n-1));	
}

int main() {
	int n;
	
	printf("\nAte que numero deseja elevar ao cubo: ");
	scanf("%d", &n);
	
	printf("\nResultado: %d.\n\n", elevarCubo(n));
	
	return 0;
}
