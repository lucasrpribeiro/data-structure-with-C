#include <stdio.h>

int sum(int a, int b)
{
  int s = a + b;
  return s;
}

int sub(int a, int b)
{
  int s = a - b;
  return s;
}

int main()
{
  int n1, n2, operation, result;

  printf("\nDigite um valor: ");
  scanf("%d", &n1);

  printf("\nDigite um valor: ");
  scanf("%d", &n2);

  printf("\nEscolha a operação: 1 - Subtração, 2 - Adição ");
  scanf("%d", &operation);

  if (operation == 1)
  {
    result = sum(n1, n2);
  };

  if (operation == 2)
  {
    result = sub(n1, n2);
  }

  printf("O resultado é: %d", result);
}