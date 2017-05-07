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

  int acertou = 0;

  int segundos = time(0);
  srand(segundos);

  int random = rand();
  int numerosecreto = random % 100;

  int numerodetentativas;
  int nivel;

  printf("Qual o nível de dificuldade?\n");
  printf("(1) fácil, (2) médio, (3) difícil)\n");
  printf("Escolha: ");
  scanf("%d\n", &nivel);

  switch (nivel) {
    case 1:
      numerodetentativas = 20;
    break;

    case 2:
      numerodetentativas = 15;
    break;

    default:
      numerodetentativas = 6;
    break;
  }

  for (int i = 1; i <= numerodetentativas; i ++) {
    printf("Tentativa : %d\n", contador + 1);

    printf("Qual e o seu chute ?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n\n", chute);

    if (chute < 0) {
      printf("Por favor, informe um número positivo\n");
      continue;
    }

    acertou = (chute == numerosecreto);
    int maior = (chute > numerosecreto);

    if (acertou) {
        break;
    } else if (maior) {
        printf("Você errou!\n");
        printf("O número secreto é menor que o número informado.\n");
        printf("Tente novamente.\n\n\n");
    } else {
        printf("Você errou!\n");
        printf("O número secreto é maior que o número informado.\n");
        printf("Tente novamente.\n\n\n");
    }

    contador++;

    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos -= pontosperdidos;
  }


  if (acertou) {
    printf("Parabens! Você acertou!\n");
    printf("Você acertou em %d tentativas\n", contador);
    printf("Total de pontos %.2f\n", pontos);
  } else {
    printf("Você perdeu! Tente novamente.\n");
  }
  printf("\n    **Fim de jogo**");

}
