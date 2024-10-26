#include <stdio.h>

// No C para declarar variáveis do tipo vetor você precisa passar para seu programa o tipo e a quantidade de posições que esse vetor/array vai ter, por exemplo, eu quero um vetor do tipo inteiro com quatro posições:

int vetor[4];

float vetorFor[3];

int main()
{
  // Para salvar valores dentro do vetor voce precisa especificar o vetor e a posição que deseja alterar:
  vetor[0] = 42;
  vetor[1] = 16;
  vetor[2] = 3060;
  vetor[3] = 5600;

  // Para ler os dados do vetor voce precisa apenas sinalizar o vetor e a posição que deseja exibir

  for (int i = 0; i < 3; i++)
  {
    // Aqui os valores estão sendo salvos a cada repetição do for até que o i seja menor que o lastIndex do vetor
    printf("\nDigite um valor: ");
    scanf("%f", &vetorFor[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    // Para exibir basta apenas sinalizar a posição correta
    printf("\n O valor do vetor[%d] é igual a %f", i, vetorFor[i]);
  }

  return 0;
}