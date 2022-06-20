//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em português
	char nome[50];
	int i;
	printf("Insira seu nome: ");
	gets(nome); //armazena o dado entrado pelo usuário
	for (i=0; nome[i] != NULL; i++){ //repetição que transforma a letra minúscula em maiúscula
		putchar(toupper(nome[i]));
	}
	printf("\nSeu nome contém %d caracteres", i);
	return 0;
}
