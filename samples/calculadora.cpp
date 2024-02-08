#include <iostream>

using namespace std;

int main() {

  // pedir para o usuario digitar 2 numeros (OK)
  double a, b;

  cout << "Digite o primeiro numero: ";
  cin >> a;

  cout << "Digite o segundo numero: ";
  cin >> b;

  // apresentar as 4 operacoes matematicas com esses dois numeros

  cout << "SOMA = " << (a + b) << endl;
  cout << "DIFERENCA = " << (a - b) << endl;
  cout << "PRODUTO = " << (a * b) << endl;
  cout << "DIVISAO = " << (a / b) << endl;
}