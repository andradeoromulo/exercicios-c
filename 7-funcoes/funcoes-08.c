/*Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y 
e calcule e retorne o resultado de x^y para o programa principal.*/

#include <stdio.h>
#include <stdlib.h>

int elevar(int x, int y) {
	if (y == 1) return x;
	else return (x*elevar(x, y-1)); 
}

int main() {
	int x, y;
	
	printf("\nInforme a base: ");
	scanf("%d", &x);
	
	printf("Informe a potencia: ");
	scanf("%d", &y);
	
	printf("\nResultado: %d.\n\n", elevar(x, y));
	
	return 0;
}
