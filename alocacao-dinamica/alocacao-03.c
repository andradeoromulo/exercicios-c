/* 9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida. */

#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

// A função irá imprimir a string invertida em vez de somente enviar o ponteiro
void imprimeInvertido(char *str) {
	char *strInv = str;
	int cont = strlen(str)-1;
	
	strInv += cont;
	
	while (cont>=0) {
		putchar(*strInv); 
		cont--;
		strInv--;
	}
	
	putchar('\n');
		
}

int main() {
	char str[20];
	int opcao;
	
	printf("\n--- PALAVRA INVERTIDA---");
	
	do {
	
		printf("\nDigite uma palavra: ");
		fflush(stdin);
		gets(str);
		
		imprimeInvertido(str);
		
		printf("\nDeseja inverter outra palavra? (s=1/n=0) ");
		scanf("%d", &opcao);
	
	} while(opcao == 1);
	
	printf("\nPrograma finalizado!\n");
	
	return 0;
}
