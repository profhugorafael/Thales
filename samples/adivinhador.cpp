#include <iostream>

using namespace std;

int main() {
  int numeroDaSorte = 15;
  int numeroDoUsuario;

  cin >> numeroDoUsuario;

  int a = 2;
  bool teste = (a == 2);

  if ( numeroDoUsuario == numeroDaSorte ) {
    cout << "Parabens vc ganhou :)" << endl;
  } else {
    cout << "Nao foi dessa vez, tente novamente :(" << endl;
  }
}