//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em portugu�s
	char nome[50];
	int i;
	printf("Insira seu nome: ");
	gets(nome); //armazena o dado entrado pelo usu�rio
	for (i=0; nome[i] != NULL; i++){ //repeti��o que transforma a letra min�scula em mai�scula
		putchar(toupper(nome[i]));
	}
	printf("\nSeu nome cont�m %d caracteres", i);
	return 0;
}
