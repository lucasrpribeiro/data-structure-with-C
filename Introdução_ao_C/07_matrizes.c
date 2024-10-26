#include <stdio.h>

// Uma matriz é semelhante a um vetor, porem elá é um elemento bidimensional, ou seja agora ela possui mais que apenas uma linha o que traz a possibilidade do elemento conter colunas

// Exemplificando uma matriz e suas posições:
// [][][][][][][][][][][][][]
// [][][][][][][][][][][][][]
// [][][][][][][][][][][][][]
// [][][][][][][][][][][][][]

// No C para declarar matizes você precisa passar para seu programa o tipo e a quantidade de posições x e y que sua matriz vai ter, por exemplo, eu quero um vetor do tipo inteiro com quatro posições:

int matriz[2][3];

int main()
{
  // Agora vamos salvar valores dentro da nossa matriz, para isso precisamos sinalizar o endereço de x e y na memoria

  for (int i1 = 0; i1 < 2; i1++)
  {
    // dentro vamos acessar o valor da posição y
    for (int i2 = 0; i2 < 3; i2++)
    {
      printf("\nDigite um valor: ");
      scanf("%d", &matriz[i1][i2]);
    }
  }

  for (int i1 = 0; i1 < 2; i1++)
  {
    for (int i2 = 0; i2 < 3; i2++)
    {
      printf("\nO valor da matriz[%d][%d] é [%d]", i1, i2, matriz[i1][i2]);
    }
  }
  return 0;
}