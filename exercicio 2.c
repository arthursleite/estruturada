// Arthur de Souza Leite
// UC21200407
#include <stdio.h>
int main(){
	int valor[5], i;
	float media = 0, soma = 0;
	for (i=0; i<5; i++){
		printf("Qual o %do valor?\n", i+1);
		scanf("%d", &valor[i]);
		soma = soma + valor[i];
	}
	printf("A soma vale: %.f\n", soma);
	media = soma / 5;
	printf("A media vale: %.1f\n", media);
	printf("\nEstes valores sao maiores que a media:\n");
	//incluir 15-22 em um for so
	for (i=0; i<5; i++){
		if (valor[i]>media)
		printf("%d\n", valor[i]);
	}
	printf("\nEstes valores sao menores que a media:\n");
	for (i=0; i<5; i++){
		if (valor[i]<media)
		printf("%d\n", valor[i]);
	}
}
