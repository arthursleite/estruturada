//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int notas[3], i;
	for(i=0; i<3; i++){
		printf("Digite a %d nota do aluno:", i+1);
		scanf("%d", &notas[i]);
	}
	for (i=0; i<3; i++){
		printf("As notas são: %d\n", notas[i]);
	}
}