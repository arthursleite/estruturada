//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em português
	int i, numeros[5];
	printf("Digite 5 números da sua escolha: \n\n");
	for (i=0; i<5; i++){ //estrutura de repetição que pede e armazena os dados entrados pelo usuário
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &numeros[i]);
	}
	for (i=4; i>=0; i--){ //imprime os números na ordem invertida à entrada pelo usuário
		printf("%d ", numeros[i]);
	}
	return 0;
}