/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definindo a estrutura como um tipo global
struct cadastro {
	char nome[40];
	int idade;
	char rua[60];
	int numero;
};

int main() {
	struct cadastro c;
	
	printf("\n--- CADASTRO ---");
	
	printf("\n--- NOME: ");
	gets(c.nome);
	
	printf("--- IDADE: ");
	scanf("%d", &c.idade);
	
	fflush(stdin);
	
	printf("--- RUA: ");
	gets(c.rua);
	
	printf("--- NUMERO: ");
	scanf("%d", &c.numero);
	
	printf("\n--- CADASTRO REALIZADO ---");
	printf("\n--- NOME: %s", c.nome);
	printf("\n--- IDADE: %d", c.idade);
	printf("\n--- RUA: %s", c.rua);
	printf("\n--- NUMERO: %d\n\n", c.idade);
	
	return 0;	
}
