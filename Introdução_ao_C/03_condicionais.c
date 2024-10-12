#include <stdio.h>

int main_condicionais()
{
  int num;
  printf("digite um numero");
  scanf("%d", num);

  if (num == 0)
  {
    printf("o valor digitado é 0");
  }
  else
  {
    printf("O valor digitado não foi 0");
  }
};

// Semelhante a qualquer outro if/else na programação podemos usar varias condicionais para fazer as nossas checagem:
// ex: ==, >, <, >=, <=, !=

int main_operadores_logicos()
{
  int a, b, c;

  printf("digite um numero");
  scanf("%d", a);
  printf("digite um numero");
  scanf("%d", b);
  printf("digite um numero");
  scanf("%d", c);

  if (a == b && b == c)
  {
    printf("os três números são iguais");
  }

  if (a == b || a == c)
  {
    printf("Pelo menos dois números são iguais");
  }

  printf("os números não são iguais");

  return 0;
}