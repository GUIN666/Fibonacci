#include <stdio.h>

int main() {
  int n, a = 0, b = 1, c, i;
  
  // Leitura do número
  printf("Digite um número: ");
  scanf("%d", &n);
  
  // Verificação se o número é 0 ou 1
  if (n == 0 || n == 1) {
    printf("O número %d pertence à sequência de Fibonacci.\n", n);
    return 0;
  }
  
  // Cálculo dos termos da sequência
  for (i = 2; i <= n; ++i) {
    c = a + b;
    a = b;
    b = c;
  }
  
  // Verificação se o número pertence à sequência
  if (c == n) {
    printf("O número %d pertence à sequência de Fibonacci.\n", n);
  } else {
    printf("O número %d não pertence à sequência de Fibonacci.\n", n);
  }
  
  return 0;
}