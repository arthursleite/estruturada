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
	printf("\t Instituto Criança Brilhante\n");
	printf("\t Um mundo com mentes mais brilhantes\n");
	printf("\t--------------------------------------\n");
	//menu para escolher o que fazer no site
	do {
		printf("\t--------------------------------------\n");
		printf("\t Instituto Criança Brilhante\n");
		printf("\t Um mundo com mentes mais brilhantes\n");
		printf("\t--------------------------------------\n");
		printf("Digite 1 para agendar sua visita \n");
		printf("Digite 2 para sair do site \n");
		printf("Digite qualquer coisa voltar ao início \n");
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
	printf(" Artigo publicado por Diogo Souza \n Há 6 dias - Tempo de leitura aprox.: 2min \n\n\n");
	printf(" Psicologia Infantil: o que é e como funciona \n\n\n");
	
	printf(" A psicologia infantil tem um papel muito importante na identificação da origem de transtornos e dificuldades que a \n"
	" criança venha a apresentar durante seu crescimento. \n\n A infância, assim como as demais fases do desenvolvimento humano, \n"
	" tem características específicas, mas nem sempre é fácil para os pais ou cuidadores perceberem quando buscar ajuda da \n"
	" psicologia infantil. \n\n Choro, pirraça, manha, hiperatividade, dispersão e retraimento são alguns exemplos de comportamentos \n"
	" esperados das crianças, mas há um limite entre o normal e o excessivo. \n\n É comum que as questões psicológicas infantis sejam \n"
	" ignoradas pois os adultos acreditam que: “criança é assim mesmo”, “isso é bobeira”, “criança não tem preocupação” \n"
	" “eles querem chamar atenção”. \n\n É necessário voltar o olhar não para o comportamento em si, mas para o que está causando \n"
	" essas ações ou reações. Estudos apontam que cerca de 10% das crianças brasileiras sofrem com algum transtorno psicológico. \n\n"
	" Também é crescente em todo o mundo números de casos de depressão infantil, o que torna o cuidado com a saúde mental \n"
	" na infância e adolescência uma questão ainda mais séria e urgente. \n\n Estar atento a sinais como mudanças no padrão alimentar, \n"
	" insistência em dormir na cama dos pais, alterações no sono, irritação e isolamento (sinais que na maioria das vezes são \n"
	" o indício e não o problema em si) é fundamental para garantir um desenvolvimento feliz e saudável para a criança e uma \n"
	" convivência harmônica para toda a família. \n");
}

void login(int opcao_registro){
	printf("\t--------------------------------------\n");
	printf("\t\t\tLogin\n");
	printf("\t--------------------------------------\n\n");
	printf("Digite 1 para se registrar\n");
	printf("Digite 2 para fazer login\n");
	printf("Digite qualquer coisa para voltar à tela de início\n");
	scanf("%d", &opcao_login);
	switch (opcao_login){
		case 1:
			system("cls");
			printf("Digite seu email: \n");
			scanf("%s", &email);
			printf("Digite sua senha contendo apenas letras: \n");
			scanf("%s", &senha);
			printf("Seu cadastro foi concluído!");
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
					printf("Seu login foi concluído com sucesso!");
				}
				else ("A senha digitado não está correta. Tente novamente!");
			}
			else{
				printf("O email digitado não está registrado. Tente novamente!");
			}
			break;
		default:
			home(a);
			break;
	}
}