//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ra, notas[3], i;
	char nome[50];
	printf("Digite seu n�mero de Registro Acad�mico: ");
	scanf("%d", &ra);
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	for (i=0; i<3; i++){
		printf("Digite sua %d nota: ", i+1);
		scanf("%d", &notas[i]);
	}
	printf("Seus dados s�o:\n");
	printf("Registro Academico: %d\n", ra);
	printf("Nome: %s\n", nome);
	for (i=0; i<3; i++){
		printf("Nota %d: %d\n", i+1, notas[i]);
	}
	return 0;
}