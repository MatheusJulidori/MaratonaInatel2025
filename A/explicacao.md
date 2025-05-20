# Explicação - Problema A: Apresentando o TCC

## Objetivo
Encontrar o menor comprimento de caixa de texto (largura) que:
1. Minimize o **maior espaço restante** ao final das linhas;
2. Em caso de empate, maximize o **número de linhas** utilizadas.

A caixa de texto deve ter tamanho igual ou maior que a maior palavra do texto, e o texto deve ocupar ao menos duas linhas.

---

## Etapas da Solução

### 1. Leitura e armazenamento das palavras
- Lemos `N`, o número de palavras.
- Em seguida, capturamos todas as palavras da frase.
- Armazenamos as palavras em um vetor `palavras`.
- Também identificamos o tamanho da maior palavra (`maiorPalavra`), que define o comprimento mínimo da caixa de texto.

### 2. Simulação de diferentes larguras
Testamos diferentes larguras de caixa, de `maiorPalavra` até um limite razoável (por exemplo, 200). Para cada largura:
- Quebramos as palavras em linhas sem cortá-las.
- Calculamos o **maior espaço restante** em qualquer linha.
- Contamos o **número de linhas** formadas.
- Atualizamos a melhor largura com base nas regras do enunciado:
  - Menor espaço restante;
  - Maior número de linhas em caso de empate.

### 3. Impressão do resultado
- Imprimimos o valor ideal da largura.
- Reimprimimos o texto quebrado em linhas respeitando essa largura.

---

## Funções da Solução

### `calculaMaiorEspacoRestante(...)`
- Simula a quebra do texto para uma determinada largura.
- Retorna o **maior espaço sobrando** ao final das linhas.
- Também retorna o número de linhas usadas.

### `imprimirTexto(...)`
- Imprime o texto original quebrado em linhas com a largura ideal encontrada.
- Garante que não haja espaços ao final da linha nem palavras cortadas.

