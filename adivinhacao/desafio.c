#include <stdio.h>

int main() {
  int valorA;
  int valorB;
  int resultado;

  printf("Informe o valor A\n");
  scanf("%d", &valorA);

  printf("Informe o valor B\n");
  scanf("%d", &valorB);

  resultado = valorA * valorB;

  printf("O resultado é %d", resultado);
}
