#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funcao da home do site
void home(int a);
//funcao de login
void login(int opcao_registro);

int main(){
	int opcao, opcao_login, opcao_registro, email, senha, email_temp, senha_temp;
	setlocale(LC_ALL,"Portuguese");
	home();
	printf("\t--------------------------------------\n");
	printf("\t Instituto Crian�a Brilhante\n");
	printf("\t Um mundo com mentes mais brilhantes\n");
	printf("\t--------------------------------------\n");
	//menu para escolher o que fazer no site
	do {
		printf("\t--------------------------------------\n");
		printf("\t Instituto Crian�a Brilhante\n");
		printf("\t Um mundo com mentes mais brilhantes\n");
		printf("\t--------------------------------------\n");
		printf("Digite 1 para agendar sua visita \n");
		printf("Digite 2 para sair do site \n");
		printf("Digite qualquer coisa voltar ao in�cio \n");
		scanf("%d", opcao);
		switch (opcao){
			case 1:
				system("cls");
				login();
				break;
			case 2:
				system("cls");
				opcao = 2;
				break;
			default:
				system("cls");
				home();
				break;
		}
	} while (opcao!=2);
}

void home(int a){
	printf("\n Todos os posts\n\n\n");
	printf(" Artigo publicado por Diogo Souza \n H� 6 dias - Tempo de leitura aprox.: 2min \n\n\n");
	printf(" Psicologia Infantil: o que � e como funciona \n\n\n");
	
	printf(" A psicologia infantil tem um papel muito importante na identifica��o da origem de transtornos e dificuldades que a \n"
	" crian�a venha a apresentar durante seu crescimento. \n\n A inf�ncia, assim como as demais fases do desenvolvimento humano, \n"
	" tem caracter�sticas espec�ficas, mas nem sempre � f�cil para os pais ou cuidadores perceberem quando buscar ajuda da \n"
	" psicologia infantil. \n\n Choro, pirra�a, manha, hiperatividade, dispers�o e retraimento s�o alguns exemplos de comportamentos \n"
	" esperados das crian�as, mas h� um limite entre o normal e o excessivo. \n\n � comum que as quest�es psicol�gicas infantis sejam \n"
	" ignoradas pois os adultos acreditam que: �crian�a � assim mesmo�, �isso � bobeira�, �crian�a n�o tem preocupa��o� \n"
	" �eles querem chamar aten��o�. \n\n � necess�rio voltar o olhar n�o para o comportamento em si, mas para o que est� causando \n"
	" essas a��es ou rea��es. Estudos apontam que cerca de 10% das crian�as brasileiras sofrem com algum transtorno psicol�gico. \n\n"
	" Tamb�m � crescente em todo o mundo n�meros de casos de depress�o infantil, o que torna o cuidado com a sa�de mental \n"
	" na inf�ncia e adolesc�ncia uma quest�o ainda mais s�ria e urgente. \n\n Estar atento a sinais como mudan�as no padr�o alimentar, \n"
	" insist�ncia em dormir na cama dos pais, altera��es no sono, irrita��o e isolamento (sinais que na maioria das vezes s�o \n"
	" o ind�cio e n�o o problema em si) � fundamental para garantir um desenvolvimento feliz e saud�vel para a crian�a e uma \n"
	" conviv�ncia harm�nica para toda a fam�lia. \n");
}

void login(int opcao_registro){
	printf("\t--------------------------------------\n");
	printf("\t\t\tLogin\n");
	printf("\t--------------------------------------\n\n");
	printf("Digite 1 para se registrar\n");
	printf("Digite 2 para fazer login\n");
	printf("Digite qualquer coisa para voltar � tela de in�cio\n");
	scanf("%d", &opcao_login);
	switch (opcao_login){
		case 1:
			system("cls");
			printf("Digite seu email: \n");
			scanf("%s", &email);
			printf("Digite sua senha contendo apenas letras: \n");
			scanf("%s", &senha);
			printf("Seu cadastro foi conclu�do!");
			//opcao_login = ?;
			break;
		case 2:
			system("cls");
			printf("Digite seu email: \n");
			scanf("%s", &email_temp);
			if (email_temp == email){
				printf("Digite sua senha: \n");
				scanf("%s", &senha_temp);
				if (senha_temp == senha){
					printf("Seu login foi conclu�do com sucesso!");
				}
				else ("A senha digitado n�o est� correta. Tente novamente!");
			}
			else{
				printf("O email digitado n�o est� registrado. Tente novamente!");
			}
			break;
		default:
			home(a);
			break;
	}
}