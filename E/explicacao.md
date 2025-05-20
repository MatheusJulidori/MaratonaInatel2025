# Explicação - Problema E: Elegância Aritmética

## Objetivo
Verificar se uma expressão com exatamente quatro números e três operadores é:
- Formada apenas por operadores do mesmo grupo (`+`|`-` ou `*`|`/`)
- Avaliada sequencialmente (esquerda para direita)
- Resulta exatamente no valor alvo fornecido na entrada

---

## Lógica da Solução

1. **Leitura de entrada**:
   - Um inteiro `alvo` (valor esperado do resultado).
   - Uma string `expr` contendo quatro dígitos e três operadores (sem espaços).

2. **Separar dígitos e operadores**:
   - Iteramos sobre cada caractere.
   - Se for dígito (`0` a `9`), salvamos em `nums[]`.
   - Se for operador (`+`, `-`, `*`, `/`), salvamos em `ops[]`.

3. **Verificar se todos operadores pertencem ao mesmo grupo**:
   - Se o primeiro for `+` ou `-`, todos os três devem ser `+` ou `-`.
   - Se for `*` ou `/`, todos devem ser `*` ou `/`.
   - Caso não sejam homogênos, imprimimos `Invalid`.

4. **Calcular resultado sequencialmente (sem prioridade)**:
   - Começamos com `result = nums[0]`.
   - Aplicamos os três operadores da esquerda para a direita.

5. **Comparar resultado com o valor alvo**:
   - Se igual, imprimimos `Valid`.
   - Caso contrário, `Invalid`.

---

## Exemplo
```
Entrada:
16
4+4+4+4

Saída:
Valid
```