/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.
*/

#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#define MAX 3

typedef struct {
	int dia;
	int mes;
	int ano;
} data;

typedef struct {
	char nome[50];
	data dataNasc;
	int idade;
} pessoa;

int main() {
	pessoa pessoas[MAX];
	data dataAtual;
	int i, iMaior, iMenor;
	
	printf("\n---DATA ATUAL---\n");
	printf("Digite o dia: ");
	scanf("%d", &dataAtual.dia);
	printf("Digite o mes: ");
	scanf("%d", &dataAtual.mes);
	printf("Digite o ano: ");
	scanf("%d", &dataAtual.ano);
	printf("DATA ATUAL: %d/%d/%d", dataAtual.dia, dataAtual.mes, dataAtual.ano);
	
	printf("\n\n---CADASTRAR PESSOAS---");
	for (i=0; i<MAX; i++) {
		printf("\n---Pessoa %d----", (i+1));
		printf("\nNome: ");
		fflush(stdin);
		gets(pessoas[i].nome);
		printf("Data de nascimento (dia): ");
		scanf("%d", &pessoas[i].dataNasc.dia);
		printf("Data de nascimento (mes): ");
		scanf("%d", &pessoas[i].dataNasc.mes);
		printf("Data de nascimento (ano): ");
		scanf("%d", &pessoas[i].dataNasc.ano);
		
		pessoas[i].idade = dataAtual.ano - pessoas[i].dataNasc.ano;
		// Conferindo se a pessoa já fez aniversário no ano atual
		if ((dataAtual.mes - pessoas[i].dataNasc.mes < 0) || 
			(dataAtual.mes - pessoas[i].dataNasc.mes == 0 &&
			dataAtual.dia - pessoas[i].dataNasc.dia < 0)) {
				pessoas[i].idade--;
		}
	}
		
	iMaior = iMenor = 0;
	
	for (i=0; i<MAX; i++) {
		if (pessoas[i].idade > pessoas[iMaior].idade) {
			iMaior = i;
		} else if (pessoas[i].idade < pessoas[iMenor].idade) {
			iMenor = i;
		}
	}
	
	printf("\n---RESULTADO---");
	printf("\nMaior idade: %s, com %d anos.", pessoas[iMaior].nome, pessoas[iMaior].idade);
	printf("\nMenor idade: %s, com %d anos.\n\n", pessoas[iMenor].nome, pessoas[iMenor].idade);
		
}
