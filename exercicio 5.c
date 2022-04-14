// Arthur de Souza Leite
// UC21200407
#include <stdio.h>
int main(){
	int a[10], b[10], i, produto = 0;
	for (i=0; i<10; i++){
		printf("Qual o valor de a[%d]?\n", i);
		scanf("%d", &a[i]);
	}
	for (i=0; i<10; i++){
		printf("Qual o valor de b[%d]?\n", i);
		scanf("%d", &b[i]);
	}
	for (i=0; i<10; i++){
		produto = produto + a[i] * b[i];
		printf("\nO produto escalar de a e b vale:%d ", produto);
	}
}