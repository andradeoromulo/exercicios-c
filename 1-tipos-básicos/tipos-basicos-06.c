/* Elabore um programa que leia dois números inteiros e exiba o resultado das operações
de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;

  printf("\nInforme o primeiro numero: ");
  scanf("%d", &x);

  printf("Informe o segundo numeo: ");
  scanf("%d", &y);

  printf("\nx^y - OU exclusivo: %d", (x^y));
  printf("\nx|y - OU bit a bit: %d", (x|y));
  printf("\nx&y - E  bit a bit: %d\n\n", (x&y));

  return 0;
}
