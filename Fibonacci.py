def fibonacci(n):
  if n == 0 or n == 1:
    return True
  a, b = 0, 1
  for i in range(2, n + 1):
    a, b = b, a + b
  return b == n

n = int(input("Digite um número: "))

if fibonacci(n):
  print("O número", n, "pertence à sequência de Fibonacci.")
else:
  print("O número", n, "não pertence à sequência de Fibonacci.")
  