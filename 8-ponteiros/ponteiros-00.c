/* Escreva um programa que contenha duas vari�veis inteiras. 
Compare seus endere�os e exiba o maior endere�o. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	
	a = b = 10;
	
	if (&a > &b) 
		printf("\nO endereco de a (%p) e maior que o endereco de b (%p).\n\n", &a, &b);
	else 
		printf("\nO endereco de b (%p) e maior que o endereco de a (%p).\n\n", &b, &a);
		
	return 0;
}
