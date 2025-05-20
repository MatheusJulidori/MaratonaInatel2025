# Problema F - Falta de Sorte

**Input file:** standard input  
**Output file:** standard output  
**Time limit:** 0.5 seconds  
**Memory limit:** 128 megabytes  

O lendário professor Renzo, conhecido por suas ideias criativas em sala de aula, resolveu inventar uma nova brincadeira para seus alunos para quão sortudos eles eram.

A brincadeira funciona da seguinte forma: o professor escolhe um número inteiro positivo `K`. Cada aluno sorteia vários números aleatórios, sempre distintos, até que consiga acumular uma soma que seja múltipla de `K` utilizando os números sorteados.

Renzo confia plenamente na habilidade matemática de seus alunos, então ele sabe que se um aluno diz que precisou de `Q` sorteios, é porque realmente não seria possível atingir o objetivo com menos.

No entanto, diferente do que se esperaria, Renzo decidiu premiar apenas os alunos mais azarados da turma. Ele sabe que, para cada número `K`, existe um limite matemático máximo `L` de números sorteados necessários para que a soma seja múltipla de `K`.

Sua tarefa é simples: dados o número `K` e a quantidade de sorteios que cada aluno precisou para vencer, diga quem são os alunos mais azarados, ou seja, que precisaram de exatamente `L` sorteios para atingir o objetivo.

## Input

- A primeira linha da entrada contém um inteiro `K (1 ≤ K ≤ 42)`, escolhido pelo professor Renzo.
- A segunda linha contém um inteiro `N (1 ≤ N ≤ 42)`, representando a quantidade de alunos participantes.
- As próximas `N` linhas contêm o nome de um aluno (sem espaços e com até 20 caracteres alfabéticos) seguido de um número inteiro `Q (1 ≤ Q ≤ 42)`, indicando de quantos sorteios o aluno precisou para alcançar uma soma múltipla de `K`.

## Output

Imprima, na ordem de entrada, o nome dos alunos azarados.  
Caso nenhum aluno tenha sido o mais azarado, imprima:

**Nenhum azarado**

---

## Exemplos

<table style="width: 100%;">
  <tr>
    <th style="width: 50%;">Entrada</th>
    <th style="width: 50%;">Saída</th>
  </tr>
  <tr>
    <td>
      4<br>
      4<br>
      Ana 2<br>
      Bruno 4<br>
      Carlos 3<br>
      Diana 4
    </td>
    <td>
      Bruno<br>
      Diana
    </td>
  </tr>
  <tr>
    <td>
      3<br>
      2<br>
      Matheus 1<br>
      Vinicius 2
    </td>
    <td>
      Nenhum azarado
    </td>
  </tr>
</table>
