//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], soma, i;
	printf("Digite 10 n�meros inteiros: ");
	for(i=0; i<10; i++){
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
	};
	printf("A soma �: %d", soma);
	return 0;
}