#include <iostream>

using namespace std;

int main() {
  int idade;

  cin >> idade;

  if ( idade >= 18 ) { // se ele tiver mais que 18
    cout << "Ja pode dirigir" << endl; // entao pode
  } else { // senao 
    cout << "Ainda nao pode dirigir" << endl; // nao pode
  }

}