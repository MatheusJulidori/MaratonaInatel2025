# Problema G - Gastando Energia da Zoe

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 1 second  
**Memory limit:** 256 megabytes  

Zoe é uma cachorrinha muito animada e cheia de energia. Para ajudá-la a gastar essa energia de forma saudável, seus tutores planejaram `N` atividades diferentes.

Cada atividade consome uma certa quantidade de energia e leva um certo tempo para ser realizada. Zoe começa o dia com um limite de energia disponível `L` e não pode ultrapassá-lo.

Zoe é muito dedicada e está disposta a fazer qualquer uma das atividades que seus tutores determinarem, mas ela **não gosta de realizar a mesma atividade mais de uma vez**.

Seu objetivo é descobrir qual é a **maior quantidade de energia** que Zoe pode gastar **sem ultrapassar** o limite `L`, e **qual é o menor tempo** necessário para atingir esse gasto.

## Input

- A primeira linha contém dois inteiros `N` e `L` (`1 ≤ N ≤ 1000`, `1 ≤ L ≤ 10000`) — o número de atividades e o limite de energia de Zoe, respectivamente.
- Em seguida, seguem `N` linhas, cada uma contendo dois inteiros `Ti` e `Ei` (`1 ≤ Ti, Ei ≤ 1000`) — o tempo e o gasto de energia da `i`-ésima atividade.

## Output

Imprima dois inteiros `E′` e `T′`, onde `E′` é a **maior quantidade de energia** que Zoe pode gastar **sem ultrapassar o limite `L`**, e `T′` é o **menor tempo total** necessário para atingir tal gasto.

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      3 10<br>
      2 4<br>
      5 5<br>
      2 3
    </td>
    <td>
      9 7
    </td>
  </tr>
  <tr>
    <td>
      4 20<br>
      20 20<br>
      3 10<br>
      7 7<br>
      6 3
    </td>
    <td>
      20 16
    </td>
  </tr>
</table>
