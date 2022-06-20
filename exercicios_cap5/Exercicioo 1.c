//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em português
	int notas[3], i;
	for(i=0; i<3; i++){ //estrutura de repetição que pede e armazena os dados entrados pelo usuário no vetor notas
		printf("Digite a %d nota do aluno:", i+1);
		scanf("%d", &notas[i]);
	}
	for (i=0; i<3; i++){ //imprime as notas informadas
		printf("As notas são: %d\n", notas[i]);
	}
}