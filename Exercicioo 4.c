//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	int i;
	printf("Insira seu nome: ");
	gets(nome);
	for (i=0; nome[i] != NULL; i++){
		putchar(toupper(nome[i]));
	}
	printf("\nSeu nome contém %d caracteres", i);
	return 0;
}
