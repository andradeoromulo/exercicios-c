/* Fa�a um programa que converta uma letra mai�scula em letra min�scula.
Use a tabela ASCII para isso. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int caractere;
	/*
	letras maiusculas v�o de 65 a 90.
	letras minusculas v�o de 97 a 122.
	Logo, basta diminuir 32 para ir de minusculas para maiusculas.
	Ex: 97(a) - 32 = 65(A) 
	*/
	
	printf("Digite um caractere: ");
	caractere = getchar();
	caractere -= 32;
	printf("\nCaractere maiusculo: %c\n\n", caractere);
	
	system("pause");
	return 0;
}
