# Problema B - Balões

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 0.25 seconds  
**Memory limit:** 64 megabytes  

Faltam poucos minutos para o início da maratona de programação do Inatel, e Crishna precisa correr até o CDG (Centro de Distribuição Geral) para buscar os balões que serão usados na competição — afinal, cada problema da prova está associado a uma cor de balão!

O CDG possui 6 armários numerados de 1 a 6, mas apenas os armários de número 1, 2 e 3 contêm os balões do evento. Os armários 4, 5 e 6 estão cheios de tranqueiras e não interessam a Crishna.

Por motivos de segurança, alguns armários requerem reconhecimento facial da coordenação para serem abertos. Além disso, Crishna só pode carregar 3 chaves por vez, escolhidas aleatoriamente entre as 6 possíveis.

Sua tarefa é verificar se, com as 3 chaves em mãos, Crishna consegue abrir ao menos um dos armários 1, 2 ou 3 que **não** requeira reconhecimento facial.

## Input

A primeira linha da entrada contém um inteiro `T (1 ≤ T ≤ 100)`, o número de casos de teste.

Cada caso de teste é composto por duas linhas:

- A primeira linha contém três inteiros `A1, A2, A3 (0 ≤ Ai ≤ 1)`, indicando o estado dos armários 1, 2 e 3, respectivamente:
  - `0`: o armário pode ser aberto apenas com chave.
  - `1`: o armário requer reconhecimento facial (não pode ser aberto apenas com chave).

- A segunda linha contém três inteiros distintos `C1, C2, C3 (1 ≤ Ci ≤ 6)`, representando os números dos armários cujas chaves Crishna pegou.

## Output

Para **cada caso de teste**, imprima uma linha com `SIM` se Crishna conseguir abrir pelo menos um dos armários 1, 2 ou 3 (que **não** requeira reconhecimento facial). Caso contrário, imprima `NAO`.

---

## Exemplo

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      3<br>
      1 0 1<br>
      4 1 2<br><br>
      1 1 0<br>
      2 1 5<br><br>
      0 0 0<br>
      5 4 6
    </td>
    <td>
      SIM<br>
      NAO<br>
      NAO
    </td>
  </tr>
</table>

---

## Note

Agradecimentos especiais à eterna coach Crishna.
