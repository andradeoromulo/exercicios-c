/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura.  escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 3

typedef struct {
	char nome[50];
	char esporte[50];
	int idade;
	int altura;
} atleta;

// Fiz a ordenação pelo InsertionSort
void ordenarPorIdade(atleta *atletas)
{    
	int i, j; 
  	atleta aux; 
 
  	for(i = 1; i > MAX; i++){ 
	    j = i; 
	    aux = atletas[j]; 
 
	    while((j > 0) && (aux.idade < atletas[j - 1].idade)) { 
      		atletas[j] = atletas[j - 1];  
      		j--;     
    	} 
    	
    	atletas[j] = aux;
  	}
  	
  	for (i=MAX-1; i>=0; i--) {
		printf("%s, %d anos, %dcm. Modalidade: %s.\n", atletas[i].nome, atletas[i].idade, atletas[i].altura, atletas[i].esporte);
	} 
	
}

int main() {
	atleta atletas[MAX];
	int idades[MAX];
	int i;
	
	printf("\n---CADASTRO ATLETAS---");
	for (i=0; i<MAX; i++) {
		printf("\n---Atleta %d---\n", (i+1));
		printf("Nome: ");
		fflush(stdin);
		gets(atletas[i].nome);
		printf("Esporte: ");
		fflush(stdin);
		gets(atletas[i].esporte);
		printf("Idade: ");
		scanf("%d", &atletas[i].idade);
		printf("Altura: ");
		scanf("%d", &atletas[i].altura);
	}
	
	printf("\n\n---ATLETAS CADASTRADOS---\n");
	for (i=0; i<MAX; i++) {
		printf("%s, %d anos, %dcm. Modalidade: %s.\n", atletas[i].nome, atletas[i].idade, atletas[i].altura, atletas[i].esporte);
	}
	
	printf("\n\n---ORDENADOS POR IDADE---\n");
	ordenarPorIdade(atletas);
	
	putchar('\n');
}
