# Problema E - Elegância Aritmética

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 0.5 seconds  
**Memory limit:** 128 megabytes  

Marcelo Cysneiros sempre foi um garoto peculiar. Desde pequeno, ao invés de brincar de carrinho ou jogar bola, ele passava horas rabiscando números no papel. Seus pais logo perceberam: ele não era apenas um garoto curioso... ele era um verdadeiro cysneiro dos números — elegante como um cisne, mas com a cabeça mergulhada em contas e cálculos.

Um dia, Marcelo descobriu um desafio matemático chamado “os quatro quatros”. Nele, é possível representar diversos números inteiros usando apenas quatro dígitos 4 e algumas operações matemáticas. Marcelo ficou obcecado! Era como se cada combinação fosse uma nova dança numérica para seus pensamentos.

Mas Marcelo era exigente: ele impôs algumas regras para tornar o jogo ainda mais elegante — como ele mesmo dizia, “císnes não se misturam com patos”. Isso significa que:

- A expressão deve usar **exatamente quatro dígitos 4**;
- Ela deve utilizar **apenas operadores de um mesmo grupo**:
  - Apenas adição e subtração: `+`, `-`, ou  
  - Apenas multiplicação e divisão: `*`, `/`;
- A expressão deve resultar no **número alvo informado**.

Sua tarefa é ajudar Marcelo a verificar se uma determinada expressão está de acordo com os critérios dele. Afinal, ele quer garantir que apenas expressões *cysneiramente corretas* façam parte de sua coleção!

## Input

A entrada contém duas linhas:

- A primeira linha contém um número inteiro `N (−256 ≤ N ≤ 256)` — o valor que a expressão deve resultar.
- A segunda linha contém uma string `E` representando a expressão matemática (sem espaços), formada apenas por **4 números M (0 ≤ M ≤ 9)**, e os operadores `+`, `-`, `*`, `/`.

É garantido que a expressão sempre conterá quatro números separados por três operadores.

## Output

Seu programa deve imprimir `Valid` ou `Invalid` conforme a regra de elegância.

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      16<br>
      4+4+4+4
    </td>
    <td>
      Valid
    </td>
  </tr>
  <tr>
    <td>
      19<br>
      5+5+5+4
    </td>
    <td>
      Invalid
    </td>
  </tr>
  <tr>
    <td>
      1<br>
      4/4/4*4
    </td>
    <td>
      Valid
    </td>
  </tr>
  <tr>
    <td>
      8<br>
      4+4+4-4
    </td>
    <td>
      Valid
    </td>
  </tr>
</table>
