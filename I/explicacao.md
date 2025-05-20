# Explicação - Problema I: Igualdade Monetária

## Objetivo
Três amigos dividiram as despesas de uma viagem, mas contribuíram com valores diferentes. 
A tarefa é descobrir quanto cada um pagou a mais ou a menos do que o valor justo.

---

## Lógica da Solução

1. Lemos o valor total da viagem.
2. Lemos quanto cada um dos três contribuiu:
   - `contribuicao1`, `contribuicao2`, `contribuicao3`
3. Como o total é garantido múltiplo de 3, o valor justo é:
   ```cpp
   porPessoa = total / 3;
   ```
4. Para cada um, calculamos a diferença:
   - Positivo: pagou a mais e deve receber
   - Negativo: pagou a menos e deve completar
