/* Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo. */

#include <stdio.h>
#include <stdlib.h> 

int main() {
	int a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	
	printf("\nDigite o valor base: ");
	scanf("%d", &a);
	
	printf("\nDobro: %d", (*b * 2));
	printf("\nTriplo: %d", (**c * 3));
	printf("\nQuadruplo: %d", (***d * 4)); 
	
	return 0;
}
