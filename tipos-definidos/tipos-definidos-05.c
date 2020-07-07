/* 7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct hora {
	unsigned int hora;
	unsigned int minuto;
	unsigned int segundo; 
};

int main() {
	struct hora registro[MAX];
	int i, iM = 0; //indice e indiceMaior
	
	for (i=0; i<MAX; i++) {
		printf("\n--- REGISTRO %i", (i+1));
		
		printf("\nHoras: ");
		scanf("%d", &registro[i].hora);
		
		printf("Minutos: ");
		scanf("%d", &registro[i].minuto);
		
		printf("Segundos: ");
		scanf("%d", &registro[i].segundo);
	}
	
	for (i=1; i<MAX; i++) {
		if (registro[i].hora > registro[iM].hora)
			iM = i;
		else if (registro[i].hora == registro[iM].hora) {
			if (registro[i].minuto > registro[iM].minuto) 
				iM = i;
			else if (registro[i].minuto == registro[iM].minuto) {
				if (registro[i].segundo > registro[iM].segundo)
					iM = i;
			}		
		} 
	}
	
	printf("\n--- Maior registro: %dh %dm %ds.\n\n", registro[iM].hora, registro[iM].minuto, registro[iM].segundo); 
}

