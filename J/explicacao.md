# Explicação - Problema J: Jogo do Pi

## Objetivo
Simular um jogo onde os jogadores contam de `0` até `M`, mas devem dizer **"Pi"** se:
1. O número for múltiplo de `A`, ou
2. Contiver o dígito `B`.

Queremos saber quantas vezes **cada jogador** diz "Pi" ao longo da contagem.

---

## Lógica da Solução

1. Lemos:
   - `numeroJogadores` → total de pessoas no jogo
   - `ultimoNumero` → até qual número se conta (inclusive)
   - `multiplo` → valor `A` (múltiplos dizem "Pi")
   - `digito` → valor `B` (presença no número diz "Pi")

2. Criamos um vetor `contadorPi[jogador]` para armazenar quantas vezes cada jogador disse "Pi".

3. Para cada número de `0` a `M`:
   - Verificamos se o número é múltiplo de `multiplo` ou contém o `digito` usando a função `contemDigito()`.
   - Se sim, atualizamos o contador de "Pi" do jogador correspondente: `jogador = i % numeroJogadores`.

---
