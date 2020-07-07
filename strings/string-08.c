/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[40], substr[40];
	int i=0, j=0, k=0, cont=0, contG=0;
	
	printf("Digite a primeira palavra: ");
	gets(str);
	
	printf("Digite a segunda palavra: ");
	gets(substr);
	
	while (i<strlen(str)) {
		k = i;
		while (j<strlen(substr)) {
			if (substr[j] == str[k]) cont++;
			j++; k++;
		}
		
		if (cont == strlen(substr)) contG++;
		j=0; cont=0; i++; 
 	}
	
	printf("\n\"%s\" esta contido %d vezes em \"%s\".\n\n", substr, contG, str);
	
	return 0;
	
}
