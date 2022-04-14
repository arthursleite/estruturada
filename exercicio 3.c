// Arthur de Souza Leite
// UC21200407
#include <stdio.h>
#include <conio.h>

int main(){
	int valor[10], i;
	for (i=0; i<10; i++){
		printf("Qual o %do valor? ", i+1);
		scanf("%d", &valor[i]);
	}
	for (i=0; i<10; i++){
		printf("O %do valor eh %d\n", i, valor[9-i]);
	}
}