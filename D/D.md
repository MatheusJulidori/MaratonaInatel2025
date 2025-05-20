# Problema D - Duda e seus Médicos

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 1 second  
**Memory limit:** 256 megabytes  

Duda trabalha na Alemanha e recentemente sofreu um acidente de trabalho, quebrando a perna.

Embora os custos médicos sejam cobertos pelo plano de saúde ou pela seguradora da empresa, ela agora enfrenta um novo desafio: o sistema de saúde alemão.

Antes de realizar a cirurgia e iniciar a fisioterapia, Duda precisa passar por uma série de consultas médicas.  
No entanto, cada médico só pode atendê-la após ela ter sido consultada por outros especialistas específicos.  
Por exemplo, o ortopedista pode exigir que ela tenha antes passado por um clínico geral.

Felizmente, Duda conta com você para ajudá-la a entender em qual ordem deve visitar os médicos. Sua tarefa é descobrir uma ordem possível que respeite todas as dependências médicas.

## Input

A primeira linha da entrada contém um inteiro `N (1 ≤ N ≤ 1000)`, representando o número de médicos que Duda precisa consultar.

Cada uma das próximas `N` linhas contém dois inteiros `M` e `D (1 ≤ M ≤ 1000, 0 ≤ D ≤ 1000)`, indicando que a consulta com o médico `M` depende da consulta com o médico `D`. Se `D = 0`, a consulta com o médico `M` pode ser feita a qualquer momento.

## Output

Imprima uma linha com a ordem em que Duda deve visitar os médicos, com os identificadores separados por espaços.  
A ordem deve respeitar todas as dependências.

Se houver mais de uma ordem possível, imprima a ordem **lexicograficamente crescente** (com os menores números primeiro em caso de empate).

Caso não seja possível agendar todas as consultas por causa de dependências cíclicas, imprima:

**Duda precisa voltar para o Brasil!**

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      3<br>
      1 0<br>
      2 1<br>
      3 2
    </td>
    <td>
      1 2 3
    </td>
  </tr>
  <tr>
    <td>
      4<br>
      1 2<br>
      2 3<br>
      3 4<br>
      4 1
    </td>
    <td>
      Duda precisa voltar para o Brasil!
    </td>
  </tr>
</table>
