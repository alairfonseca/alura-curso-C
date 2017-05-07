#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  printf("**********************\n");
  printf("* Bem vindo ao jogo! *\n");
  printf("**********************\n");

  double pontos = 1000;
  int contador = 0;
  int ganhou = 0;
  int chute;

  int segundos = time(0);
  srand(segundos);

  int random = rand();
  int numerosecreto = random % 100;

  while (!ganhou) {
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

    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos -= pontosperdidos;
  }

  printf("\n    **Fim de jogo**");
  printf("Você acertou em %d tentativas\n", contador);
  printf("Total de pontos %.2f\n", pontos);

}
