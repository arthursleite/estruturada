//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em portugu�s
	int notas[3], i;
	for(i=0; i<3; i++){ //estrutura de repeti��o que pede e armazena os dados entrados pelo usu�rio no vetor notas
		printf("Digite a %d nota do aluno:", i+1);
		scanf("%d", &notas[i]);
	}
	for (i=0; i<3; i++){ //imprime as notas informadas
		printf("As notas s�o: %d\n", notas[i]);
	}
}