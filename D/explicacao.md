# Explicação - Problema D: Duda e seus Médicos

## Objetivo
Dada uma lista de médicos com dependências entre consultas, determinar uma ordem de atendimento que respeite essas dependências. 
Caso exista um **ciclo** (ex: médico A depende de B, que depende de C, que depende de A), então não é possível definir uma ordem válida.

---

## Modelo
Modelamos o problema como um **grafo direcionado**:
- Cada médico é um vértice.
- Se o médico M depende de D, criamos uma aresta de `D → M`.
- Precisamos fazer uma **ordenação topológica** dos vértices.

---

## Algoritmo Utilizado
**Ordenação Topológica com fila de prioridade** (menor médico primeiro):
1. Armazenamos a lista de adjacência e o grau de entrada (quantas dependências cada médico tem).
2. Todos os médicos com grau 0 (sem dependências) entram na fila.
3. Usamos `priority_queue` com ordem crescente para garantir o menor médico primeiro.
4. A cada iteração, removemos um médico da fila, adicionamos à resposta, e diminuímos o grau dos médicos que dependem dele.
5. Se algum médico fica com grau 0, ele entra na fila.
6. Se ao final, o tamanho da resposta for menor que o número total de médicos usados, é porque existe um ciclo.

---

## Entrada e Saída
- Entrada: pares `m d` indicando que `m` depende de `d` (ou `0` se não depende).
- Saída:
  - Ordem de consultas em ordem válida e crescente.
  - Ou mensagem "Duda precisa voltar para o Brasil!" se houver ciclo.

---

