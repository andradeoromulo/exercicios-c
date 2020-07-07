/* Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto superior esquerdo e o ponto inferior direito do ret�ngulo. 
Cada ponto � definido por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa que declare e leia uma estrutura Ret�ngulo 
e exiba a �rea e o comprimento da diagonal e o per�metro desse ret�ngulo. */

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
	float b, h;
	float area, perimetro, diagonal;
	struct retangulo ret;
	
	printf("\n--- PONTO SUPERIOR ESQUERDO ---\n");
	printf("Coordenada x: ");
	scanf("%f", &ret.pS.x);
	printf("Coordenada y: ");
	scanf("%f", &ret.pS.y);
	
	printf("\n--- PONTO INFERIOR DIREITO ---\n");
	printf("Coordenada x: ");
	scanf("%f", &ret.pI.x);
	printf("Coordenada y: ");
	scanf("%f", &ret.pI.y);
	
	b = ret.pI.x - ret.pS.x;
	h = ret.pS.y - ret.pI.y;
	
	area = b * h;
	perimetro = 2 * (b + h);
	diagonal = sqrt(pow(b, 2) + pow(h, 2));
	
	printf("\n--- RESULTADOS ---");
	printf("\nArea: %.2f", area);
	printf("\nPerimetro: %.2f", perimetro);
	printf("\nDiagonal: %.2f\n\n", diagonal);
	
	return 0;
}
