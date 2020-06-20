/* Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, 
e informe se esse ponto está ou não dentro do retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	float x;
	float y;
};

struct retangulo {
	struct ponto pS; //ponto superior
	struct ponto pI; //ponto inferior
};

int main() {
	struct retangulo ret;
	struct ponto pt;
	
	printf("\n--- RETANGULO ---");
	
	printf("\n--- Ponto superior esquedo ---\n");
	printf("Coordenada x: ");
	scanf("%f", &ret.pS.x);
	printf("Coordenada y: ");
	scanf("%f", &ret.pS.y);
	
	printf("\n--- Ponto inferior direito ---\n");
	printf("Coordenada x: ");
	scanf("%f", &ret.pI.x);
	printf("Coordenada y: ");
	scanf("%f", &ret.pI.y);

	printf("\n--- PONTO ---");
	printf("\nCoordenada x: ");
	scanf("%f", &pt.x);
	printf("Coordenada y: ");
	scanf("%f", &pt.y);
	
	if ((pt.x >= ret.pS.x && pt.x <= ret.pI.x) && (pt.y <= ret.pS.y && pt.y >= ret.pI.y)) 
		printf("\nO ponto esta dentro do retangulo.\n\n");
	else printf("\nO ponto nao esta dentro do retangulo.\n\n");
	
	return 0;
}
