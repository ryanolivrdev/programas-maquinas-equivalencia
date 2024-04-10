# O programa iterativo em Python utiliza um loop for para calcular o fatorial. 
# O programa é executado em um interpretador Python.

def fatorial(numero):
  resultado = 1
  for i in range(1, numero + 1):
    resultado *= i
  return resultado

numero = 5
resultado = fatorial(numero)
print(f"Fatorial de {numero}: {resultado}")
