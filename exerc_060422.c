//Simule a execução do programa abaixo destacando a sua saída:
//Faça a inclusão do header que permite a exibição dos caracteres em português
#include <stdio.h>
#include <locale.h>
//setlocale (LC_ALL, "portuguese");
int main()
{ 
  int n, inic, fim, i, aux, para, a[100];

  printf("Digite n: ");
  scanf("%d", &n); 
  printf("n = %d\n", n);
  setlocale (LC_ALL, "portuguese");
  printf("Digite uma sequência de %d números.\n", n);
  for (i = 0; i < n; i++) { 
    scanf("%d", &a[i]); 
    printf("%d ", a[i]); 
  }
  printf("\n"); // o código até aqui pede ao usuário uma sequência de números e a mostra na tela
  inic = 0; 
  fim  = n - 1; 
  aux  = a[inic];
  while (inic < fim) { //enquanto fim for maior que zero, esse while será executado
    para = 0;
    while ((inic < fim) && !para) { //enquanto fim for maior que zero e para for igual a 1, esse while será executado
      if (a[fim] <= aux) 
        para = 1; //se a, que é (n-1), for menor ou igual ao número da primeira posição, para será 1 e o while se repetirá
      else 
        fim = fim - 1; //caso o if seja falso, se subtrairá 1 de fim até chegar a 0, tornando o while da linha 23 falso,
        			   //parando assim esse while
    }
    if (para) { //se para for igual a 1, esse if será executado
      a[inic] = a[fim]; //atribui n-1 à inic, ou seja, a[inic] == a[n-1]
      inic = inic + 1; //inic terá o valor de n
      para = 0;
      while ((inic < fim) && !para) { //enquanto inicio for menor que fim e para ser 1, executar
        if (a[inic] <= aux) //se a[0] for menor ou igual a 
          inic = inic + 1;
        else 
          para = 1;
      }
      if (para) {
        a[fim] = a[inic]; 
        fim = fim - 1;
      }
    }
    for (i = 0; i < n; i++) 
      printf("%d ", a[i]);
    printf("\n");
  } 
  a[inic] = aux;
  for (i = 0; i < n; i++) 
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}
