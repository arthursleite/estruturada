// Arthur de Souza Leite
// UC21200407
#include <stdio.h>

int main(){
	int valor[10], i, refer, menor=0, igual=0;
	for (i=0; i<10; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &valor[i]);
	}
	printf("Digite o valor de referencia: ");
	scanf("%d", &refer);
	for (i=0; i<10; i++){
		if (valor[i]<refer){
			menor++;
	}
		if (valor[i]==refer){
			igual++;
		}
	}
	printf("Esses numeros sao maiores que o valor de referencia: \n");
	for (i=0; i<10; i++){ //letra a)
		if (valor[i]>refer)
			printf("%d\n", valor[i]);
	}
	printf("Existem %d numeros menores que o valor de referencia: \n", menor); //letra b)
	printf("Existem %d numeros iguais ao valor de referencia: \n", igual); //letra c)
}