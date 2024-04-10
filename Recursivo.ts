// O programa recursivo em TypeScript utiliza uma função recursiva para 
// calcular o fatorial. O programa é executado em um compilador TypeScript.

function fatorial(numero: number): number {
  if (numero === 0) {
    return 1;
  } else {
    return numero * fatorial(numero - 1);
  }
}

const numero = 5;
const resultado = fatorial(numero);
console.log(`Fatorial de ${numero}: ${resultado}`);