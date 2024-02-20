# Introducao ao Python

## Saida

para fazer saida utilizamos a funcao `print`:

```py
print('Ola, Mundo!')
```

## Variaveis

No python temos tipagem forte(as variaveis pegam tipo) e dinamica(este tipo pode mudar durante a execucao).

```py
nome = 'Hugo'
idade = 23
altura = 1.8
eh_habilitado = True # True e False sempre com letra maiuscula
```

## Saidas com variaveis

podemos concatenar varias saidas:

```py
print('Ola', 'isto', 'eh', 'uma', 'saida')
# resposta: Ola isto eh uma saida
```

podemos interpolar a saida:

```py
a = 10
b = 20
soma = a + b

print(f'soma de {a} mais {b} da {soma}')
```

## Entradas

Para fazer entradas utilizamos o comando `input` que aguarda a entrada do usuario no terminal.

```py
nome = input()

print(f'seu nome eh {nome}')
```

Podemos exibir tambem mensagens antes de solicitar que o usuario digite, basta colocar o texto dentro da funcao `input`:

```py
nome = input('digite seu nome: ')

print(f'seu nome eh {nome}')
```
