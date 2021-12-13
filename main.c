#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void red () {
  printf("\e[1;31m");
}

void green () {
  printf("\e[1;32m");
}

void yellow () {
  printf("\e[4;33m");
}

void reset () {
  printf("\033[0m");
}

int main(void){

  int op;

  yellow();
  printf("\nADIVINHE O NÚMERO\n");
  reset();
  printf("\n1 - ");
  green();
  printf("Iniciar\n");
  reset();
  printf("2 - ");
  red();
  printf("Sair\n");
  reset();
  printf("\nSelecione uma opção: ");
  scanf("%d", &op);

while(op !=2){

  if(op == 1){

  srand(time(NULL));
  int n = rand() % 100;
  int n1;
  
  yellow();
  printf("\nAdivinhe o número que estou pensando de 1 a 100\n");
  
  reset();
  printf("\nDigite um número inteiro: ");
  while (n1 != n) {

    scanf("%d", &n1);

    if (n1 <= 0 || n1 > 100) {
    red();
    printf("\n*OPÇÃO INVALIDA*\n");
    reset();
    printf("\nDigite outro número: ");
    }

    else if(n1 < n) {
    red();
    printf("\nVOCÊ ERROU!\n");
    reset();
    printf("Tente novamente\n \n");
    printf("Digite um número maior: ");
    }

    else if (n1 > n) {
    red();
    printf("\nVOCÊ ERROU!\n");
    reset();
    printf("Tente novamente\n");
    printf("\nDigite um número menor: ");
    }
     
    else if (n1 == n) {
    green();
    printf("\nPARABÉNS VOCÊ ACERTOU!\n");
    yellow();
    printf("\nQuer jogar de novo?\n");
    reset();
    printf("\n1 - ");
    green();
    printf("Jogar novamente\n");
    reset();
    printf("2 - ");
    red();
    printf("Sair\n");
    reset();
    printf("\nSelecione uma opção: ");
    scanf("%d", &op);
    }
  }
    }
  else if (op < 1 || op > 2) {
    red();
    printf("\n*OPÇÃO INVALIDA*\n");
    reset();
    printf("\nEscolha outra opção: ");
    scanf("%d", &op);
    }
  }
  yellow();
  printf("\nFIM!, Obrigado por jogar.\n");

  return 0;
}