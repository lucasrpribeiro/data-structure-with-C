#include <stdio.h>

int main()
{
  printf("\nWHILE\n");

  int num = 0;

  while (num < 5)
  {
    printf("a variável é menor que 5 e seu valor é: %d \n", num);
    num++;
  }

  printf("O valor da variável ja é igual a %d", num);

  printf("\nFOR\n");

  // for(inicialização; condição; incremento)

  for (int i = 0; i < 4; i++)
  {
    printf("A variável i é %d\n", i);
  }

  return 0;
}