/* ) Considerando a estrutura atleta do exercício anterior, escreva um programa que
leia um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o
nome do atleta mais alto e do mais velho. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct {
	char nome[20];
	char esporte[20];
	int idade;
	float altura;
} atleta;

int main() {
	FILE *arq;
	arq = fopen("./arquivos/arquivo-00.txt", "rb");
	
	if (arq == NULL) {
		perror("\nHouve um erro ao abrir o arquivo: ");
		exit(1);
	}
	
	atleta atletas[MAX];
	int i, totalLido;
	
	totalLido = fread(atletas, sizeof(atleta), MAX, arq);
	
	if (totalLido != MAX) {
		perror("\nHouve algum erro ao ler os dados: ");
		exit(1);
	}
	
	printf("\nDados lidos com sucesso!\n");
	fclose(arq);
	
	printf("\n--- ATLETAS ---");
	for(i=0; i<MAX; i++) {
		printf("\n--- Atleta %d ---", (i+1));
		printf("\nNome: %s", atletas[i].nome);
		printf("\nEsporte: %s", atletas[i].esporte);
		printf("\nIdade: %d", atletas[i].idade);
		printf("\nAltura: %.2f\n", atletas[i].altura);
	}
	
}
