#include <stdio.h>

// Variáveis
// Diferente de algumas linguagens que são tipadas dinamicamente o C você precisa inferir o tipo da variável na sua declaração, sendo a sua declaração

int inteiro = 5;       // int para declarar uma variável do tipo numero inteiro
float quebrado = 5.8;  // float para declarar uma variável do tipo numero float(quebrado)
double precisao = 5.8; // float para declarar uma variável do tipo numero double(tem mais precisão no seu valor quebrado)
char caracter = 'c';   // char para declarar uma variável do tipo carácter (recebe um carácter)

int main(void)
{
  printf("o valor da variável 'inteiro' é %d\n", inteiro);
  printf("o valor da variável 'quebrado' é %.1f\n", quebrado);
  printf("o valor da variável 'carácter' é %c\n", caracter);
  return 0;
}

// Ao final de cada linha do código é obrigatório conter um < ; > para sinalizar o final da linha