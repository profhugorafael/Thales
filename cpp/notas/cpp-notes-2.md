# Seleção

Rodar um pedaço de código se uma condição for satisfeita.

## Comentarios

comentario de uma linha

```cpp
int a; // oi sou um comentario de uma linha
```

comentario com inicio e fim:

```cpp
/*
  Hugo Rafael
  Projeto xyz
  Fevereiro de 2024
*/
```

## if - *Se*

```cpp
if(/*condicao*/) {
  // faca alguma coisa se a condicao for true(verdadeira)
}
```

```cpp
int idade;

cin >> idade;

if ( idade >= 18 ) {
  cout << "pode dirigir" << endl;
}
```

- se ele tiver mais que 18 entao pode, senao nao pode
- se tiver chovendo entao eu fico em casa, senao eu saio
- se a pessoa que estou conversando se chamar amanda entao encontrei, senao continuo procurando

operadores:

- `=` serve para atribuir valor:

```cpp
int a = 2;
int b;

b = 5;
b = 10;
```

- `==` servem para comparar valores:

```cpp
int estoque;

cin >> estoque;

if ( estoque == 0 ) {
  cout << "hora de fechar a loja" << endl
}
```
