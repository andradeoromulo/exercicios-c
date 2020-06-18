/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[40], substr[40];
	int i=0, j=0, k=0, cont=0;
	
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
		
		if (cont == strlen(substr)) break;
		else { j=0; cont=0; i++; }
 	}
	
	if (cont == strlen(substr)) printf("\n\"%s\" eh uma substring de \"%s\".\n\n", substr, str);
	else printf("\n\"%s\" nao eh uma substring de \"%s\".\n\n", substr, str);
		
	return 0;
}	
