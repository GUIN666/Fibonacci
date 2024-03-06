import java.util.Scanner;

public class Fibonacci {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Digite um número: ");
    int n = scanner.nextInt();
    
    if (n == 0 || n == 1) {
      System.out.println("O número " + n + " pertence à sequência de Fibonacci.");
      return;
    }
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
      c = a + b;
      a = b;
      b = c;
    }
    
    if (c == n) {
      System.out.println("O número " + n + " pertence à sequência de Fibonacci.");
    } else {
      System.out.println("O número " + n + " não pertence à sequência de Fibonacci.");
    }
  }
}