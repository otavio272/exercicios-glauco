#include <stdio.h>
#include <stdlib.h>

int power(int base, int n);
int multiplication(int base, int n);
int verify(int base, int n);
void hanoi(int base, char from, char to, char aux);

void powerCalc();
void multiplicationCalc();
void digitRepetitionCalc();
void hanoiCalc();

int times;
int powerBase, powerNum;
int multiBase, multiTimes;
int naturalNumber, digit;
int discos;

int main() {
  powerCalc();
  multiplicationCalc();
  digitRepetitionCalc();
  hanoiCalc();
}

// Funções de Chamada

void powerCalc() {
  printf("Informe um número: ");
  scanf("%d", &powerBase);

  printf("Informe uma potência: ");
  scanf("%d", &powerNum);

  system("@cls||clear");

  printf("1 - Função recursiva que calcula a elevação de pontência\n");
  printf("Resultado de %d ^ %d = %d\n\n", powerBase, powerNum, power(powerBase, powerNum));

  printf("Pressione uma tecla para continuar: \n");
  getchar();
  getchar();

  system("@cls||clear");
}

void multiplicationCalc() {
  printf("Informe um número: ");
  scanf("%d", &multiBase);

  printf("Informe quantas vezes multiplica-lo: ");
  scanf("%d", &multiTimes);

  system("@cls||clear");

  printf("2 - Função recursiva de multiplicação\n");
  printf("Resultado de %d * %d = %d\n\n", multiBase, multiTimes, multiplication(multiBase, multiTimes));

  printf("Pressione uma tecla para continuar: \n");
  getchar();
  getchar();

  system("@cls||clear");
}

void digitRepetitionCalc() {
  printf("Informe um número natural: ");
  scanf("%d", &naturalNumber);

  printf("Informe um dígito: ");
  scanf("%d", &digit);

  system("@cls||clear");

  printf("3 - Função recursiva de identificação de números repetidos\n");
  verify(naturalNumber, digit);
  printf("Vezes que %d repete em %d = %d\n\n", digit, naturalNumber, times);

  printf("Pressione uma tecla para continuar: \n");
  getchar();
  getchar();

  system("@cls||clear");
}

void hanoiCalc() {
  printf("Informe uma quantidade de discos: ");
  scanf("%d", &discos);

  system("@cls||clear");

  printf("4 - Torre de Hanoi utilizando %d discos\n", discos);
  hanoi(discos, 'A', 'C', 'B');

  printf("\nPressione uma tecla para continuar: \n");
  getchar();
  getchar();
}

// Funções Recursivas

int power(int base, int n) {
  if (n != 0)
    return (base * power(base, n - 1));
  else
    return 1;
}

int multiplication(int base, int n) {
  if (n != 0)
    return (base + multiplication(base, n - 1));
  else
    return 0;
}

int verify(int base, int n){
  if (base == 0) {
    return 0;
  } else {
    if(n == (base % 10)) {
      times++;
    }

    base = base / 10;
    return verify(base, n);
  }
}

void hanoi(int base, char from, char to, char aux) {
    if (base == 1){
      printf("\n Move disk 1 from rod %c to rod %c", from, to);
      return;
    }

    hanoi(base - 1, from, aux, to);
    printf("\n Move disk %d from rod %c to rod %c", base, from, to);
    hanoi(base - 1, aux, to, from);
}