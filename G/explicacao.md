# Explicação - Problema G: Gastando Energia da Zoe

## Objetivo
Zoe precisa gastar energia realizando atividades diferentes. Cada atividade consome uma quantidade de energia e leva um certo tempo. Seu objetivo é:

1. Gastar o **máximo de energia possível**, sem ultrapassar o limite `L`.
2. Em caso de empate, usar o **menor tempo total**.

---

## Tipo de problema
Esse é um problema clássico de **programação dinâmica**, conhecido como **Mochila 0/1 com minimização de custo**.

- Capacidade da mochila: `limiteEnergia`
- Cada atividade é um item com:
  - "peso" = energia gasta
  - "custo" = tempo de execução

---

## Lógica da Solução

Usamos um vetor `menorTempo[energia]`, onde:
- `menorTempo[e]` representa o **menor tempo necessário para gastar exatamente `e` unidades de energia**.
- Inicializamos todas as posições com um valor alto (`INFINITO`), exceto `menorTempo[0] = 0`.

### Preenchimento da DP:
Para cada atividade:
1. Percorremos de `limiteEnergia` até `energiaGasta[i]`, de trás para frente.
2. Se `menorTempo[energia - energiaGasta[i]]` for válido,
   - Tentamos atualizar `menorTempo[energia]` com o novo tempo.

### Escolha final:
Depois de preencher, procuramos:
- A maior energia `e` tal que `menorTempo[e]` é válido.
- Dentre os empates, escolhemos o **menor tempo total**.

---
