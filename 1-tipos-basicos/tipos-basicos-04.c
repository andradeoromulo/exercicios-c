/* Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("\nInforme um numero: ");
  scanf("%d", &num);

  printf("\nComplemento bit a bit: %d\n\n", (~num)+1);

  system("pause");
  return 0;
}

