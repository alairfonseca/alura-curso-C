#include <stdio.h>

int main() {
  printf("**********************\n");
  printf("* Bem vindo ao jogo! *\n");
  printf("**********************\n");

  int numeroSecreto = 42;
  int chute;

  printf("Qual e o seu chute ?\n");
  scanf("%d", &chute);
  printf("Seu chute foi %d", chute);
}
