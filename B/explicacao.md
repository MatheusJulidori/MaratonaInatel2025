# Explicação - Problema B: Balões

## Objetivo
Verificar se é possível abrir **pelo menos um** dos armários 1, 2 ou 3 que **não requerem reconhecimento facial**, utilizando uma das 3 chaves.

---

## Lógica da Solução

1. Lemos o número de casos de teste `T`.

2. Para cada caso de teste:
   - Lemos o estado dos armários 1, 2 e 3:
     - `0` significa que **pode ser aberto com chave**;
     - `1` significa que **requer reconhecimento facial**.
   - Para cada uma das 3 chaves:
     - Lemos o número do armário que ela abre.
     - Se o número está entre `1` e `3` **e** o armário correspondente tem valor `0`, então a chave é útil.

3. Se pelo menos uma chave é útil, imprimimos `SIM`, caso contrário, `NAO`.

---