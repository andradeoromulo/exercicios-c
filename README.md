# Exercícios C

Soluções de *alguns* dos exercícios propostos no livro **"Linguagem C: completa e descomplicada"**, do **Prof. André Backes**.  

Os códigos estão separados em tópicos de acordo com a ordem adotada pelo livro. Abaixo, é possível escolher uma das seções e ver quais exercícios têm propostas de solução.
Qualquer erro encontrado ou sugestão de melhoria, só abrir uma Issue ou PR.

1. [Tipos básicos](#tipos-basicos)
2. [Controles condicionais](#controles-condicionais)
3. [Comandos de repetição](#comandos-de-repeticao) 
4. [Vetores e matrizes](#vetores-e-matrizes)
5. [Strings](#strings)
6. [Tipos definidos](#tipos-definidos)
7. [Funções](#funcoes)
8. [Ponteiros](#ponteiros)
9. [Alocação dinâmica](#alocacao-dinamica)
10. [Manipulação de arquivos](#manipulacao-de-arquivos)

## Tipos basicos 

1. Faça um programa que converta uma letra maiúscula em letra minúscula.
Use a tabela ASCII para isso. 
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-01.c).

2. Faça um programa para ler um número inteiro positivo de três digitos.
Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo: 123 -> 321. 
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-02.c).

3. Escreva um programa que leia um número inteiro e mostre a 
multiplicação e a divisão desse número por dois (utilize os
operadores de deslocamento de bits). 
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-03.c).

4. Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-04.c).

5. Elabore um programa que leia dois números inteiros e exiba
o deslocamento, à esquerda e à direita, do primeiro número pelo
segundo. 
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-05.c).

6. Elabore um programa que leia dois números inteiros e exiba o resultado das operações
de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles. 
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-basicos/tipos-basicos-06.c).

## Controles condicionais

1. Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostre qual a classificação dessa pessoa.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/controles-condicionais/condicao-01.c).

2. Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida,
calcule e mostre as raízes dessa equação.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/controles-condicionais/condicao-02.c).

## Comandos de repeticao

1. Faça um programa que leia um numero inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/comandos-de-repeticao/repeticao-01.c).

2. Escreva um programa que leia um número inteiro positivo N e em seguida
imprima N linhas do triângulo de Floyd.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/comandos-de-repeticao/repeticao-02.c).

## Vetores e matrizes

1. Faca um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor contido
nessa matriz e a sua localização (linha e coluna).
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-01.c).

2. Faca um programa que declare uma matrix de tamanho 5x5. Preencha com 1 a diagonal principal e com 0
os demais elementos. Ao final, escreva a matriz obtida na tela.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-02.c).

3. Faca uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos
em sua diagonal secundária.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-03.c).

4. Faça uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que estão acima da diagonal principal.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-04.c).

5. Faça uma matriz que leia uma matriz de tamanho 6x6. Calcule e imprima a soma de 
elementos dessa matriz que estão abaixo da diagonal principal.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-05.c).

6. Faça uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-06.c).

7. Faça uma matriz que leia uma matriz de tamanho 5x5. Calcule e imprima a soma de 
elementos dessa matriz que pertencem à diagonal principal ou à diagonal secundária.
Calcule também a soma dos elementos que não pertencem a nenhuma das diagonais.
Imprima na tela a diferença entre os dois valores.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-07.c).

8. Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e imprima
a matriz B, sendo B = A^2.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/vetores-e-matrizes/matriz-08.c).

## Strings

1. Faça um programa que leia e imprima uma string.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-01.c).

2. Faça um programa que leia uma string e imprima as quatro primeiras
letras dela.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-02.c).

3. Sem usar a função strlen(), faça um programa que leia uma string
e imprima quantos caracteres ela possui.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-03.c).

4. Faça um programa que leia uma string e a imprima de trás para frente.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-04.c).

5. Faça um programa que leia uma string e a inverta. A string invertida
deve ser armazenada dentro da mesma variável. Em seguida, imprima a string invertida.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-05.c).

6. Faca  um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo
ou não.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-06.c).

7. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
se a segunda string lida está contida dentro da primeira.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-07.c).

8. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-08.c).

9. O código de César é uma das técnicas de criptografia mais simples e conhecidas.
É um tipo de substituição no qual cada letra do texto é substituída por outra,
que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de
três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
Escreva um programa que faça uso desse código de César para três posições. Entre
com uma string e imprima a string codificada.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-09.c).

10. Escreva um programa que leia duas strings e as imprima em ordem alfabética,
a ordem em que elas apareceriam em um dicionario.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/strings/string-10.c).

## Tipos definidos

1.Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-00.c).

2. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-01.c).

3. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-02.c).

4. Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. 
Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo 
e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-03.c).

5. Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, 
e informe se esse ponto está ou não dentro do retângulo.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-04.c).

6. Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-05.c).

7. Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um valor inteiro do teclado 
e exiba o dia da semana correspondente.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-06.c).

8. Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize 
um dos tipos dessa união e exiba em tela o valor do outro tipo.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-07.c).

9. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-08.c).

10. Mesclando dois exercícios: crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/tipos-definidos/tipos-definidos-09.c).

## Funcoes

1. Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas. 
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i]).
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-00.c).

2. Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas e seis colunas. 
Essa função deve retornar, por referência, a soma dos elementos da sua diagonal principal e da sua diagonal secundária.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-01.c).

3. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, 
seu nome e as notas de três provas. Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura. Essa função 
deve retornar o índice do aluno que possui a maior média geral entre todos os alunos.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-02.c).

4. Escreva uma função recursiva que calcule a soma dos primeiros n cubos.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-03.c).

5. Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-04.c).

6. Crie uma função recursiva que receba um número inteiro N e 
imprima todos os números naturais de 0 até N em ordem crescente.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-05.c).

7. Crie uma função recursiva que receba um número inteiro N e 
imprima todos os números naturais de 0 até N em ordem decrescente.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-06.c).

8. Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-07.c).

9. Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y 
e calcule e retorne o resultado de x^y para o programa principal.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-08.c).

10. Escreva uma função recursiva que receba um valor inteiro em base decimal e o
imprima em base binária.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-09.c).

11. Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo: Número lido = 123. Número retornado = 321.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/funcoes/funcoes-10.c).

## Ponteiros

1. Escreva um programa que contenha duas variáveis inteiras. 
Compare seus endereços e exiba o maior endereço.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/ponteiros/ponteiros-00.c).

2. Crie um programa que contenha uma matriz de float contendo três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/ponteiros/ponteiros-01.c).

3. Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/ponteiros/ponteiros-02.c).

4. Mesclando dois exercícios:
Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/ponteiros/ponteiros-03.c).

5. Considere a seguinte declaração: int a, *b, \**c, \*\**d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/ponteiros/ponteiros-04.c).

## Alocacao dinamica

1. Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/alocacao-dinamica/alocacao-00.c).

2. Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro
positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente,
 dessa estrutura. Solicite também que o usuário digite os dados desse vetor
dentro da função.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/alocacao-dinamica/alocacao-01.c).

3. Escreva um programa que aloque dinamicamente uma matriz de inteiros. 
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/alocacao-dinamica/alocacao-02.c).

4. Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/alocacao-dinamica/alocacao-03.c).

## Manipulacao de arquivos

1. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os 
dados de cinco atletas e os armazene em um arquivo binário.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/manipulacao-de-arquivos/arquivos-00.c).

2. Considerando a estrutura atleta do exercício anterior, escreva um programa que
leia um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o
nome do atleta mais alto e do mais velho.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/manipulacao-de-arquivos/arquivos-01.c).

3. Escreva um programa que: (a) Crie/abra um arquivo texto de nome “arq.txt”; 
(b) Permita que o usuario grave diversos caracteres nesse arquivo, até que o usuário 
entre com o caractere ‘0’; (c) Feche o arquivo. 
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/manipulacao-de-arquivos/arquivos-02.c).

4. Faça um programa que recebe como entrada o nome de um arquivo de entrada e o nome
de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de tamanho
de 30 caracteres. No arquivo de saída devera ser escrito o arquivo de entrada de forma 
inversa.
[Proposta de solução](https://github.com/andradeoromulo/exercicios-c/blob/master/manipulacao-de-arquivos/arquivos-03.c).
