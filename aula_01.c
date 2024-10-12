#include <stdio.h>

// Variáveis

int inteiro = 5;
float quebrado = 5.8;
double precisao = 5.8;
char caracter = 'c';

int main(void)
{
  printf("o valor da variável 'inteiro' é %d\n", inteiro);
  printf("o valor da variável 'quebrado' é %.1f\n", quebrado);
  printf("o valor da variável 'carácter' é %c\n", caracter);
  return 0;
}