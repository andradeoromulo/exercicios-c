/* Faça um programa que recebe como entrada o nome de um arquivo de entrada e o nome
de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de tamanho
de 30 caracteres. No arquivo de saída devera ser escrito o arquivo de entrada de forma 
inversa. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arq = NULL;
	char caminho[100], texto[100], c;
	int i=0;
	
	// Arquivo de origem
	
	printf("\nDigite o caminho para o arquivo que deseja abrir: ");
	fflush(stdin);
	gets(caminho);
	
	arq = fopen(caminho, "r");
	
	if(arq == NULL) {
		perror("\nHouve um erro ao abrir o arquivo de origem: ");
		exit(1);
	}
	
	// Lendo e exibindo dados
	while((c=fgetc(arq)) != EOF) {
		texto[i] = c;
		i++;
	} 
	
	printf("\nConteudo do arquivo de origem: \n%s\n", texto);
	fclose(arq);
	
	// Arquivo alvo
	
	printf("\nDigite o caminho para o arquivo para o qual \ndeseja enviar o conteudo invertido: ");
	fflush(stdin);
	gets(caminho);
	
	arq = fopen(caminho, "w+");
	
	if (arq == NULL) {
		perror("\nHouve um erro ao abrir o arquivo alvo: ");
		exit(1);
	}
	
	// Gravando dados

	printf("\nGravando dados...");
	for (i=strlen(texto)-1; i>=0; i--) 
		fputc(texto[i], arq);
	
	// Exbindo dados
	
	fseek(arq, 0, SEEK_SET);
	
	printf("\n\nConteudo do arquivo alvo: \n");
	while((c=fgetc(arq)) != EOF) 
		printf("%c", c);
	
	printf("\n\nPrograma finalizado!\n");
	fclose(arq);	
	
}
