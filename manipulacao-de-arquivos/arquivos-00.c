/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os 
dados de cinco atletas e os armazene em um arquivo binário. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct {
	char nome[20];
	char esporte[20];
	int idade;
	float altura;
} atleta;

int main() {
	FILE *arq;
	arq = fopen("./arquivos/arquivo-00.txt", "wb");
	
	if (arq == NULL) {
		perror("\nHouve um erro ao criar o arquivo: ");
		exit(1);
	}
	
	atleta atletas[MAX];
	int i, totalGravado;
	
	printf("\n--- LENDO DADOS ---");
	for(i=0; i<MAX; i++) {
		printf("\n--- ATLETA %d ---", (i+1));
		printf("\nNome: ");
		fflush(stdin);
		gets(atletas[i].nome);
		printf("Esporte: ");
		fflush(stdin);
		gets(atletas[i].esporte);
		printf("Idade: ");
		scanf("%d", &atletas[i].idade);
		printf("Altura: ");
		scanf("%f", &atletas[i].altura);
	}
	
	// Escrevendo no arquivo
	
	totalGravado = fwrite(atletas, sizeof(atleta), MAX, arq);
	
	if (totalGravado != MAX) {
		perror("\nHouve algum erro na gravação dos dados: ");
		exit(1);
	}
	
	printf("\nDados gravados com sucesso!\n");
	fclose(arq);
		
}
