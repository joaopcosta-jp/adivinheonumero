#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  srand(time(NULL));
  int n = rand() % 100;
  int n1;
  
  printf("Adivinhe o número que estou pensando de 1 a 100\n");

  while (n1 != n) {
    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    if(n1 < n) {
    printf("VOCÊ ERROU!\n \n");
    printf("O número é maior\n \n");
    printf("Tente novamente\n \n");
    }

    else if (n1 > n) {
    printf("VOCÊ ERROU!\n \n");
    printf("O número é menor\n \n");
    printf("Tente novamente\n \n");
    }
     
    else if (n1 == n) {
    printf("PARABÉNS VOCÊ ACERTOU!\n");
    }
  }
}