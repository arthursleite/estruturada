//Arthur de Souza Leite
//UC21200407
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	//não consegui fazer
	setlocale(LC_ALL, "Portuguese");
	char palavra[50], letra;
	int i, num_vezes;
	printf("Insira uma palavra: ");
	gets(palavra);
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	for (i=0; palavra[i] != NULL; i++){
		putchar(palavra[i]);
	}
	for (i=0; palavra[i] == letra; i++){
			num_vezes++;
		}
	printf("\nA letra '%c' aparece %d vezes nessa palavra.", letra, num_vezes);
	return 0;
}
