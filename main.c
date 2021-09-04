#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  srand(time(NULL));
  int n = rand() % 100;
  int n1;
  
  printf("Adivinhe o número que estou pensando de 1 a 100\n");
  
  printf("Digite um número inteiro: ");
  while (n1 != n) {

    scanf("%d", &n1);

    if(n1 < n) {
    printf("VOCÊ ERROU!\n");
    printf("Tente novamente\n \n");
    printf("Digite um número maior: ");
    }

    else if (n1 > n) {
    printf("VOCÊ ERROU!\n");
    printf("Tente novamente\n \n");
    printf("Digite um número menor: ");
    }
     
    else if (n1 == n) {
    printf("PARABÉNS VOCÊ ACERTOU!\n");
    }
  }
  return 0;
}