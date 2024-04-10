// C Monolítico:

// O programa monolítico em C com goto utiliza uma combinação de goto e if 
// para implementar um loop que multiplica os números de 1 até o número dado. 
// O programa é executado em um compilador C.

#include <stdio.h>

int main() {
  int numero = 5;
  int resultado = 1;

inicio:
  if (numero > 0) {
    resultado *= numero;
    numero--;
    goto inicio;
  }

  printf("Fatorial: %d\n", resultado);

  return 0;
}

