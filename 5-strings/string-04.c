/*faça um programa que leia uma string e a imprima de trás para frente. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[30];
	int i;
	
	printf("Digite uma palava qualquer: ");
	gets(string);
	
	printf("\nDe tras para frente: ");
	
	for (i = strlen(string)-1; i >= 0; i--) printf("%c", string[i]);
	
	printf("\n\n");
	
	return 0;
}
