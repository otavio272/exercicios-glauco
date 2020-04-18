#include <stdio.h>

// Questão 1 - R: 3628800
// Questão 2 - R: 2004310016
// Questão 3 - R: Apenas o calculo utilizando o valor 10 retorna corretamente. Ao utilizar o valor 15 é retornado um valor diferente.

int fatorial(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * fatorial(num - 1);
  }
}

int main() {
  int num1, num2;
  num1 = 10;
  num2 = 12;

  printf("Fatorial of %d = %d\n", num1, fatorial(num1));
  printf("Fatorial of %d = %d", num2, fatorial(num2));
}