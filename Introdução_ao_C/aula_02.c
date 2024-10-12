#include <stdio.h>

// Entrada de dados
// Armazenando dados vindos de um input em variáveis

int main()
{
  int num;
  printf("Digite um número: ");
  scanf("%d", &num); // Irá esperar o usuário digitar um valor sendo que (%d) sinaliza que esse valor sera um valor inteiro e (&num) diz que esse valor sera salvo na variável num
  printf("O valor da variável num é: %d", num);
  return 0;
}