//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); //possibilita o uso de caracteres em portugu�s
	int assentos[30][6], a, b; 
	printf("Os assentos dispon�veis s�o: \n");
	for(a=0; a< 30; a++) {
		for(b=0; b<6; b++) { //estrutura de repeti��o que imprime os valores da matriz
			printf("Fileira %d Assento %d: Dispon�vel \n", a+1, b+1, assentos[a][b]);
		}
	}
}