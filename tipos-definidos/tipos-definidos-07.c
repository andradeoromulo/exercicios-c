/*Crie uma uni�o contendo dois tipos b�sicos diferentes. Agora, escreva um programa que inicialize 
um dos tipos dessa uni�o e exiba em tela o valor do outro tipo.*/

#include <stdio.h>
#include <stdlib.h>

union dif { 
	char a; //8 bits
	unsigned short int b; //16 bits
};

int main() {
	union dif uniao;
	
	uniao.b = 105;
	
	printf("\na = %c", uniao.a);
	printf("\nb = %d", uniao.b);
	
}

