/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posi��es X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a dist�ncia
dele at� a origem das coordenadas, isto �, a posi��o (0,0).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float d;
	
	struct ponto {
		int x;
		int y;
	} p;
	
	printf("\nCoordenada x: ");
	scanf("%d", &p.x);
	printf("Coordenada y: ");
	scanf("%d", &p.y);
	
	d = sqrt(pow((p.x - 0), 2) + pow((p.y - 0), 2));
	
	printf("\nDistancia entre o ponto e a origem(0, 0): %.2f.\n\n", d);
	
	return 0;
}
