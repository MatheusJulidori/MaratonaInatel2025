# Problema J - Jogo do Pi

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 1 second  
**Memory limit:** 256 megabytes  

Christian e seus amigos da equipe de programação decidiram relaxar após uma maratona com uma rodada do tradicional **jogo do Pi**. As regras do jogo são simples, mas exigem atenção:

- Todos os jogadores se sentam em círculo.
- Dois números são escolhidos: `A` e `B`.
- A contagem começa em 0 e segue no sentido horário entre os jogadores.
- Na sua vez, o jogador deve dizer o número correspondente à contagem, **exceto** se o número:
  - for **múltiplo de `A`**, ou
  - contiver o **dígito `B`** na sua escrita decimal.

Nesses casos, o jogador deve dizer **"Pi"** em vez do número.

Como a contagem foi muito longa, surgiu a dúvida: será que todos os jogadores disseram “Pi” a quantidade correta de vezes?

Chris quer sua ajuda para descobrir **quantas vezes cada jogador disse “Pi”**, considerando que o jogo foi jogado corretamente até um certo número `M`.

> **Nota:** A contagem é circular, os jogadores são numerados de 1 a `N`, e o jogador 1 sempre inicia com o número 0.

---

## Input

A entrada consiste em quatro números inteiros `N`, `M`, `A` e `B`, separados por espaço:

- `1 ≤ N ≤ 21` — número de jogadores.
- `0 ≤ M ≤ 10¹²` — valor final da contagem.
- `1 ≤ A ≤ 9` — valor cujo múltiplo exige que se diga "Pi".
- `0 ≤ B ≤ 9` — dígito cuja presença em um número exige que se diga "Pi".

---

## Output

A saída deve conter `N` linhas.  
A linha `i` deve conter um número inteiro representando **quantas vezes o jogador `i` disse "Pi"** ao longo da contagem de `0` até `M` (inclusive).

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      3 10 3 7
    </td>
    <td>
      4<br>
      1<br>
      0
    </td>
  </tr>
  <tr>
    <td>
      2 1234567890 9 9
    </td>
    <td>
      375146146<br>
      423573705
    </td>
  </tr>
</table>

---

## Nota

Com `N = 3`, cada jogador disse os seguintes números:

- Jogador 1: 0, 3, 6, 9
- Jogador 2: 1, 4, 7, 10
- Jogador 3: 2, 5, 8

Substituem-se por "Pi" os números:
- 0 (múltiplo de 3)
- 3 (múltiplo de 3)
- 6 (múltiplo de 3)
- 7 (contém dígito 7)
- 9 (múltiplo de 3)

Portanto:
- Jogador 1 disse “Pi” 4 vezes (0, 3, 6, 9)
- Jogador 2 disse “Pi” 1 vez (número 7)
- Jogador 3 nunca disse “Pi”
