# Explicação - Problema C: Campo Minado

## Objetivo
Simular o comportamento do jogo campo minado:
- Se clicar em uma bomba, o jogo termina com "voce perdeu".
- Caso contrário, contar quantas bombas existem ao redor da posição clicada (inclusive diagonais).

---

## Lógica da Solução

1. Lemos `L`, `C` e `T`:
   - `L` = número de linhas do campo
   - `C` = número de colunas do campo
   - `T` = quantidade de tentativas (cliques)

2. Armazenamos o campo em uma matriz de caracteres `campo[L][C]`.
   - Cada posição pode ser `'.'` (livre) ou `'#'` (bomba)

3. Para cada tentativa:
   - Lemos a posição clicada (`x`, `y`) e ajustamos para índice iniciando em 0.
   - Se a posição contém bomba (`#`), imprimimos **"voce perdeu"** e encerramos.
   - Caso contrário, percorremos as 8 direções ao redor da posição clicada e contamos as bombas.

4. Imprimimos a quantidade de bombas ao redor.

---

## Como são verificadas as direções?

Usamos dois laços aninhados de `-1` a `1` para `dx` e `dy`, que representam os deslocamentos horizontais e verticais:
- Total de 9 combinações (inclusive a posição atual)
- Checamos se a posição `(x+dx, y+dy)` é válida e tem bomba
