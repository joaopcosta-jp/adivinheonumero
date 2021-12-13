#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int op;

  printf("ADIVINHE O NÚMERO\n");
  printf("\n1 - Iniciar\n");
  printf("2 - Sair\n");
  printf("\nSelecione uma opção: ");
  scanf("%d", &op);

while(op !=2){

  if(op == 1){

  srand(time(NULL));
  int n = rand() % 100;
  int n1;
  
  printf("\nAdivinhe o número que estou pensando de 1 a 100\n");
  
  printf("\nDigite um número inteiro: ");
  while (n1 != n) {

    scanf("%d", &n1);

    if(n1 < n) {
    printf("VOCÊ ERROU!\n");
    printf("Tente novamente\n \n");
    printf("Digite um número maior: ");
    }

    else if (n1 > n) {
    printf("\nVOCÊ ERROU!\n");
    printf("Tente novamente\n");
    printf("\nDigite um número menor: ");
    }
     
    else if (n1 == n) {
    printf("\nPARABÉNS VOCÊ ACERTOU!\n");
    printf("\nQuer jogar de novo?\n");
    printf("\n1 - Jogar novamente\n");
    printf("2 - Sair\n");
    printf("\nSelecione uma opção: ");
    scanf("%d", &op);
    }
  }
    }
  else if (op < 1 || op > 2) {
    printf("\n*OPÇÃO INVALIDA*\n");
    printf("\n1 - Iniciar\n");
    printf("2 - Sair\n");
    printf("\nEscolha outra opção: ");
    scanf("%d", &op);
    }
  }
  return 0;
}