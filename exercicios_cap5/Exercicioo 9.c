//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em portugu�s
	int numeros[10], soma, i;
	printf("Digite 10 n�meros inteiros: ");
	for(i=0; i<10; i++){ //estrutura de repeti��o que pede e armazena os dados entrados pelo usu�rio, e faz a soma pedida
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
	};
	printf("A soma �: %d", soma); //imprime o resultado
	return 0;
}