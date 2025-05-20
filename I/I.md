# Problema I - Igualdade Monetária

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 0.25 seconds  
**Memory limit:** 64 megabytes  

Dâmi, Maycon e Policarpo estão relembrando a viagem para o Sul que fizeram na final nacional de programação em Foz do Iguaçu em 2017. Após muita pesquisa, finalmente descobriram quais passagens e hotel reservaram.

Na época, no momento da compra, cada um contribuiu com uma quantia diferente. Mas hoje, como todos têm um ótimo emprego, nada mais justo do que fazerem uma divisão igual das despesas.

O valor total da viagem deve ser dividido igualmente entre os três. Sabendo quanto cada um contribuiu, determine quanto sobrou ou falta para cada um pagar sua parte.

## Input

A entrada consiste de duas linhas:

- A primeira linha contém um inteiro `N (3 ≤ N ≤ 3000)` — o custo total da viagem em moedas.
- A segunda linha contém três inteiros `X`, `Y` e `Z (1 ≤ X, Y, Z ≤ 3000)` — o número de moedas que Dâmi, Maycon e Policarpo contribuíram, respectivamente.

É garantido que `N` é múltiplo de 3 e que `X + Y + Z = N`.

## Output

Imprima uma única linha com três inteiros `X′`, `Y′` e `Z′` — onde:

- `X′` é a diferença entre o valor que Dâmi contribuiu e o valor que ele deveria ter pago;
- `Y′` é a mesma diferença para Maycon;
- `Z′` é a diferença para Policarpo.

Se a diferença for positiva, significa que a pessoa pagou a mais e tem direito a receber; se for negativa, significa que ela pagou a menos e precisa completar sua parte.

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      300<br>
      120 90 100
    </td>
    <td>
      20 -10 0
    </td>
  </tr>
  <tr>
    <td>
      3000<br>
      1000 1000 1000
    </td>
    <td>
      0 0 0
    </td>
  </tr>
</table>
