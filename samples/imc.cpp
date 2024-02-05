// -> recebe o peso e a altura 
// -> calcula o IMC 
// -> apresentar na tela

#include <iostream>

using namespace std;

int main() {
  double peso, altura;

  cout << "Digite seu peso: ";
  cin >> peso;

  cout << "Digite sua altura: ";
  cin >> altura;

  double imc = peso / (altura * altura);

  cout << "IMC: " << imc << endl;
}