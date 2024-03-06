#include <iostream>

using namespace std;

int main() {
  int n, a = 0, b = 1, c, i;
  
  // Leitura do número
  cout << "Digite um número: ";
  cin >> n;
  
  // Verificação se o número é 0 ou 1
  if (n == 0 || n == 1) {
    cout << "O número " << n << " pertence à sequência de Fibonacci." << endl;
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
    cout << "O número " << n << " pertence à sequência de Fibonacci." << endl;
  } else {
    cout << "O número " << n << " não pertence à sequência de Fibonacci." << endl;
  }
  
  return 0;
}