// Arthur de Souza Leite
// UC21200407
#include <stdio.h>
int main(){
	int valor[5], i, soma=0;
	for (i=0; i<5; i++){
		printf("Qual o %do valor?\n", i+1);
		scanf("%d", &valor[i]);
		//soma = soma + valor[i];
	}
	for (i=0; i<5; i++){
		soma = soma + valor[i];
	}
	printf("A soma vale: %d + %d + %d + %d + %d = %d\n",valor[0], valor[1], valor[2], valor[3], valor[4], soma);
}
