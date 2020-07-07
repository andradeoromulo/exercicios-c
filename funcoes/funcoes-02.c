/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, 
seu nome e as notas de três provas. Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura. Essa função 
deve retornar o índice do aluno que possui a maior média geral entre todos os alunos. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

typedef struct {
	unsigned int matricula;
	char nome[40];
	float prova[3];
} aluno;

int maiorMedia(aluno classe[]) {
	float media, mediaMaior=0;
	int i, I, j;
	
	for (i=0; i<MAX; i++) {
		
		media = 0;
		
		for (j=0; j<3; j++) 
			media += classe[i].prova[j];
			
		media /= 3;
			
		if (media > mediaMaior) { 
			mediaMaior = media; 
			I = i; 
		} 		 
	}
	
	return I;
}

int main() {
	aluno classe[MAX];
	int i, j;
	
	for (i=0; i<MAX; i++) {
		printf("\n--- ALUNO %d ---", (i+1));
		
		printf("\nMatricula: ");
		scanf("%d", &classe[i].matricula);
		
		printf("Nome: ");
		fflush(stdin);
		gets(classe[i].nome);
		
		for (j=0; j<3; j++) {
			printf("Prova %d: ", (j+1));
			scanf("%d", &classe[i].prova[j]);
		}
	}
	
	i = maiorMedia(classe);
	
	printf("\n--- MAIOR MEDIA ---");
	printf("\nAluno: %s.\n\n", classe[i].nome);
}
