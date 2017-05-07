#include <stdio.h>

int main() {

  printf("**********************\n");
  printf("* Bem vindo ao jogo! *\n");
  printf("**********************\n");

  int contador = 0;
  int ganhou = 0;

  while (!ganhou) {
    int numerosecreto = 42;
    int chute;

    printf("Tentativa : %d\n", contador + 1);

    printf("Qual e o seu chute ?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n\n", chute);

    if (chute < 0) {
      printf("Por favor, informe um número positivo\n");
      continue;
    }

    int acertou = (chute == numerosecreto);
    int maior = (chute > numerosecreto);

    if (acertou) {
        printf("Parabens! Você acertou!\n");
        ganhou = 1;
    } else if (maior) {
        printf("Você errou!\n");
        printf("O número secreto é menor que o número informado.\n");
        printf("Tente novamente.\n");
    } else {
        printf("Você errou!\n");
        printf("O número secreto é maior que o número informado.\n");
        printf("Tente novamente.\n");
    }

    contador++;
  }

  printf("\n    **Fim de jogo**");

}
