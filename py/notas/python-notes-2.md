# Seleção/condições (if/else)

`bool`: guarda `True` ou `False`

estrutura do `if`(*se*):

```py
if [CONDICAO] :
  [CODIGO_SE_FOR_VERDADE]
```

```py
idade = int(input())

# se a idade for menor que 18
if idade < 18:
  print('nao pode entrar')

print('alguma coisa')
```

## Variaveis booleanas

```py
ta_chovendo = True
eh_habilitado = False
```

## Operadores booleanos

Operadores booleanos criam operacoes que devolvem verdadeiro ou falso.

`==`: comparam se duas variaveis sao iguais
`!=`: diferente - compara se duas coisas sao diferentes
`a > b`: maior - compara se **a** é maior que **b**
`a >= b`: maior - compara se **a** é maior ou igual que **b**
`a < b`: maior - compara se **a** é menor que **b**
`a <= b`: maior - compara se **a** é menor ou igual que **b**

```py
if clima == 'chuva':
  print('fico em casa')
```

## `if...else`

```py
if [CONDICAO] :
  [CODIGO_SE_FOR_VERDADE]
else:
  [CODIGO_SE_FOR_FALSO]
```
