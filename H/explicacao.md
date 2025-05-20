# Explicação - Problema H: Hacktown

## Objetivo
Distribuir veículos (com pessoas) em estacionamentos pela cidade de modo a:
1. Minimizar a soma total das distâncias que todas as pessoas irão caminhar até o palco;
2. Garantir que todos os veículos consigam estacionar respeitando a capacidade de cada estacionamento (em quantidade de veículos);
3. Se não for possível estacionar todos, exibir **"Temos um problema"**.

---

## Etapas da Solução

### 1. Representação do mapa
Modelamos a cidade como um grafo não-direcionado:
- Cada local é um vértice;
- Cada rua é uma aresta bidirecional com peso (distância).

### 2. Dijkstra do palco
Executamos o algoritmo de **Dijkstra** a partir do local do palco para calcular a **menor distância de cada local até o palco**.
Isso nos permite saber quanto cada pessoa caminhará a partir de qualquer estacionamento.

### 3. Preparar estacionamentos
- Selecionamos apenas os estacionamentos com vagas e distância conhecida.
- Ordenamos esses estacionamentos por distância crescente ao palco.

### 4. Ordenar veículos por pessoas
- Os veículos com mais pessoas são alocados primeiro, pois seu impacto no cálculo é maior (`pessoas * distância`).

### 5. Alocação gulosa
- Para cada veículo (em ordem do mais cheio ao mais vazio), procuramos o estacionamento válido mais próximo com vagas.
- Alocamos o veículo (uma vaga por carro), subtraímos a vaga, e somamos o custo `pessoas * distância`.
- Se não houver vaga em nenhum estacionamento, exibimos **"Temos um problema"**.

---

## Complexidade
- **Dijkstra:** `O(M log N)`
- **Ordenação de veículos e estacionamentos:** `O(P log P + E log E)`
- **Alocação:** `O(P * E)` no pior caso

---
