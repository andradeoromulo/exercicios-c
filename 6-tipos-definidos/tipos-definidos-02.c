/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float d;
	
	struct ponto {
		int x;
		int y;
	} p1, p2;
	
	printf("\n--- PONTO 1 ---");
	printf("\nCoordenada x: ");
	scanf("%d", &p1.x);
	printf("Coordenada y: ");
	scanf("%d", &p1.y);
	
	printf("\n--- PONTO 2 ---");
	printf("\nCoordenada x: ");
	scanf("%d", &p2.x);
	printf("Coordenada y: ");
	scanf("%d", &p2.y);
	
	
	d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	
	printf("\nDistancia entre os pontos: %.2f.\n\n", d);
	
	return 0;
}
