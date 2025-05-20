# Explicação - Problema F: Falta de Sorte

## Objetivo
Determinar quais alunos foram "mais azarados" — ou seja, quais precisaram do **maior número possível de sorteios** distintos até conseguir encontrar uma combinação de números cuja soma seja múltipla de `K`.

---

## Regra Matemática
De acordo com a teoria dos módulos (resto da divisão):
- Se sorteamos `K` números distintos positivos, sempre existirá **algum subconjunto** cuja soma seja múltipla de `K`.

Isso significa que:
> **No pior caso, um aluno pode precisar de exatamente `K` sorteios** para conseguir vencer.

---

## Lógica da Solução
1. Lemos `K` (valor usado para definir múltiplos) e `N` (quantidade de alunos).
2. Calculamos o valor limite: `limite = K`.
3. Para cada aluno:
   - Lemos seu nome e quantas tentativas (`Q`) ele precisou.
   - Se `Q == K`, ele foi "azarado" e imprimimos seu nome.
4. Se nenhum aluno foi azarado, imprimimos **"Nenhum azarado"**.

---

## Exemplo
```
Entrada:
4
4
Ana 2
Bruno 4
Carlos 3
Diana 4

Saída:
Bruno
Diana
```

---

## Observação
A dificuldade desse problema está em entender que o limite teórico (pior caso = `K`). Saber isso é essencial para resolver corretamente.
