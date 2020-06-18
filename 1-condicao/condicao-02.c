/* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida,
calcule e mostre as raízes dessa equação. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float a, b, c, x1, x2, delta, raiz;

	while (1) {

    	printf("\nInforme o coeficiente a: ");
    	scanf("%f%*c", &a); // Utilizando o operador de supressão * para evitar buffer de teclado

    	if (a != 0) break;
    	printf("O coeficiente a nao pode ser 0.");
    	printf("\n\nContinuar...");
    	getchar();
  	}
	
	printf("Informe o coeficiente b: ");
	scanf("%f", &b);
  
	printf("Informe o coeficiente c: ");
	scanf("%f", &c);  
	
	//Procurando delta
	delta = pow(b, 2) - 4*a*c;
	raiz = sqrt(delta);
	
	if (delta<0) {
		
  		printf("\nDelta menor que zero. Nao ha raizes reais.\n\n");
  		
	} else if (delta = 0) {
		
		printf("\nDelta igual a zero. Ha uma raiz real.");
		
		x1 = (-b + raiz) / 2*a;
		printf("\nx = %.2f.\n\n", x1);
		
	} else {
		
		printf("\nDelta maior que zero. Ha duas raizes reais.");
		
		x1 = (-b + raiz) / (2*a);
		x2 = (-b - raiz) / (2*a);
		
		printf("\nx\'  = %.2f.", x1);
		printf("\nx\'\' = %.2f.", x2);
	}
	  
	return 0;
}
