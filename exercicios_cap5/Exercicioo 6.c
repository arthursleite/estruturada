//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em portugu�s
	int i, numeros[5];
	printf("Digite 5 n�meros da sua escolha: \n\n");
	for (i=0; i<5; i++){ //estrutura de repeti��o que pede e armazena os dados entrados pelo usu�rio
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &numeros[i]);
	}
	for (i=4; i>=0; i--){ //imprime os n�meros na ordem invertida � entrada pelo usu�rio
		printf("%d ", numeros[i]);
	}
	return 0;
}