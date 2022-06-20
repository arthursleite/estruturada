//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char velha[5][5], i, j;
	
	for (j=0; j<5; j++){
		if (j%2 == 0){
			for (i=0; i<5; i++){
				if (i%2 == 0){
					printf("X");
				}
				else {
					printf ("|");
				}
			}
		}
		else{
			printf("\n");
			printf("-----");
			printf("\n");
		}
	}
}