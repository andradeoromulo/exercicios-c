/* Elabore um programa que leia dois números inteiros e exiba
o deslocamento, à esquerda e à direita, do primeiro número pelo
segundo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, pos;

  printf("\nInforme um numero: ");
  scanf("%d", &num);

  printf("Quantas posicoes deseja deslocar? ");
  scanf("%d", &pos);

  printf("\nDeslocamento a esquerda: %d", (num<<pos));
  printf("\nDeslocamento a direita: %d\n\n", (num>>pos));

  system("pause");
  return 0;
}
