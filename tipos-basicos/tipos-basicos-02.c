/* Fa�a um programa para ler um n�mero inteiro positivo de tr�s digitos.
Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos do n�mero lido.
Exemplo: 123 -> 321 */

#include <stdio.h>
#include <stdlib.h>

int inverter(int num);

int main() {
	int num;
	
	printf("\nDigite um numero inteiro positivo: ");
  scanf("%d", &num);
	num = inverter(num);
	printf("\nNumero invertido: %d\n\n", num);
	
	system("pause");
	return 0;
}

int inverter(int num) {
	int aux = 0;
	while (num > 0) {
	  aux *= 10; //fazendo o numero invertido andar uma dezena para receber o proximo
    aux += num%10; //recebendo o numero invertido atraves do resto da divisao
    num /= 10; //diminuindo uma dezena no numero original
  }
  return aux;
}
