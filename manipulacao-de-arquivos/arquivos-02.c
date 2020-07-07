/* Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuario grave diversos caracteres nesse arquivo, até que o usuário 
entre com o caractere ‘0’
(c) Feche o arquivo. 
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq;
	arq = fopen("./arquivos/arquivo-02.txt", "w");
	
	if (arq == NULL) {
		perror("\nHouve um erro ao criar o arquivo: ");
		exit(1);
	}
	
	char c;
	while(1) {
		printf("\nInforme um caractere para ser gravado (0 para sair): ");
		fflush(stdin);
		scanf("%c", &c);
		if (c == '0') break;
		fputc(c, arq);
	};
	
	fclose(arq);
	
	printf("\nArquivo fechado para gravacao!");
	
	arq = fopen("./arquivos/arquivo-02.txt", "r");
	
	if (arq == NULL) {
		perror("\nHouve um erro ao abrir arquivo para leitura: ");
		exit(1);
	}
	
	printf("\nArquivo aberto para leitura!");
	
	printf("\n\nConteudo: ");
	while ((c = fgetc(arq))!= EOF)
		printf("%c", c);
	
	printf("\n\n");
	
	fclose(arq);
	
	return 0;
}
