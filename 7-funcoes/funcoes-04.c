/* Crie uma fun��o recursiva que receba um n�mero inteiro N e retorne o somat�rio dos n�meros de 1 a N.*/

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
