// Arthur de Souza Leite
// UC21200407
#include <stdio.h>
int main(){
	int x[5], y[5], i, result;
	for (i=0; i<5; i++){
		printf("Digite o valor de x[%d]\n", i);
		scanf ("%d", &x[i]);
	}
	for (i=0; i<5; i++){
		printf("Digite o valor de y[%d]\n", i);
		scanf ("%d", &y[i]);
	}
	for (i=0; i<4; i++){
		result = result + x[i] + y[4-i];
	}
	printf ("O resultado eh %d", result);
}