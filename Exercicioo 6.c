//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numeros[5];
	printf("Digite 5 n�meros da sua escolha: \n\n");
	for (i=0; i<5; i++){
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &numeros[i]);
	}
	for (i=4; i>=0; i--){
		printf("%d ", numeros[i]);
	}
	return 0;
}