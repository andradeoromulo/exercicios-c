/* 6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. 
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário. */

#include <stdio.h>
#include <stdlib.h>

int estaContido(int elemento, int **matriz, int numLin, int numCol) {
	int i, j;
	
	for(i=0; i<numLin; i++) {
		for(j=0; j<numCol; j++) 
			if (matriz[i][j] == elemento)
				return 1;
	}
	
	return 0;
}

void sair() {
	printf("\nERRO AO ALOCAR MEMORIA!\n");
	exit(1);
}

int main() {
	int **matriz;
	int numLin, numCol;
	int i, j, opcao;
	
	printf("\n--- ALOCACAO DINAMICA DE UMA MATRIZ ---");
	printf("\nInforme o numero de linhas: ");
	scanf("%d", &numLin);
	printf("Informe o numero de colunas: ");
	scanf("%d", &numCol);
	
	matriz = (int **) malloc(numLin * sizeof(int *));
	
	if (matriz == NULL) sair();
	
	printf("\n--- PREENCHENDO MATRIZ ---\n");
	
	for(i=0; i<numLin; i++) {
		matriz[i] = (int *) malloc(numCol * sizeof(int));
		
		if (matriz[i][0] == NULL) sair();
		
		for(j=0; j<numCol; j++) {
			printf("[%d][%d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
		}
	
	}
	
	printf("\n--- PROCURANDO ELEMENTOS ---\n");
	
	do {
		printf("Digite o elemento que deseja procurar na matriz: ");
		scanf("%d", &j);
		
		(estaContido(j, matriz, numLin, numCol))
			? printf("O elemento %d existe na matriz.\n", j)
			: printf("O elemento %d nao existe na matriz.\n", j);
		
		printf("\nDeseja procurar outro elemento? (n=0/s=1) ");
		scanf("%d", &opcao);
		
		putchar('\n');
			
	} while (opcao==1);
	
	printf("\nPrograma finalizado!\n");
	
} 


