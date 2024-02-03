# Introdução ao C++

## Linguagem de Programação

Intermediador entre a linguagem humana e a linguagem de máquina.

- Tem que ser objetiva.

- C++
- assembly e entende C++
- linguagem de maquina e entende assembly

## Compilador (tradutor)

O compilador traduz o nosso codigo escrito em alguma linguagem de programacao para um codigo executavel na maquina.

## Estrutura base de um programa cpp

```cpp
// biblioteca p/ entrada e saida
#include <iostream>

// decora
using namespace std;

//  funcao principal
int main() {
  // seu codigo aqui
}
```

## Saidas

para executarmos uma saida/impressao no terminal utilizamos o comando `cout`:

```cpp
  cout << "Ola, Mundo!" << endl;
```

- `cout`: Command Out (*Comando de Saida*)
- `endl`: End Of Line (*fim da linha*)

exemplos:

```cpp
int quantidadeUvas = 10;
int quantidadeBananas = 12;
int quantidadePeras = 15;

int total = quantidadeUvas + quantidadeBananas + quantidadePeras;

cout << "---- Estoque -----" << endl;
cout << "Quantidade Uvas: " << quantidadeUvas << endl;
cout << "Quantidade Bananas: " << quantidadeBananas << endl;
cout << "Quantidade Peras: " << quantidadePeras << endl;
cout << "Total de frutas: " << total << endl;
```

## Variaveis

|Variavel|Exemplo|Objetivo|
|:-:|:-:|:-:|
|`int`|`int idade = 30`|guardar um numero inteiro|
|`double`|`double altura = 1.8`|guardar um numero real (com virgula)|
|`boolean`|`bool estaChovendo = false`|guarda verdadeiro ou falso|
|`char`|`char sexo = 'M'`|guarda verdadeiro ou falso|
|`long` ou `long int`|`long identificador = 30218`|guardar um numero inteiro grande|
|`float`|`float saldo = 30.2`|guardar um numero inteiro grande|

## String

tipo de variavel que guarda um texto

```cpp
#include <iostream>
#include <string.h>

using namespace std;

int main () {
  string nome = "Hugo Rafael";
  int idade = 22;
  double altura = 1.8;
  bool jogaBasquete = true;

  cout << "Seu nome eh: " << nome << endl;
  cout << "Sua idade eh: " << idade << endl;
  cout << "Sua altura eh: " << altura << endl;
  cout << "Sabe jogar basquete? " << jogaBasquete << endl;

}
```

## Entradas

para executarmos uma leitura/entrada no terminal utilizamos o comando `cin`:

```cpp
  int x;

  cin >> x;
```

- `cin`: Command In (*Comando de Entrada*)
