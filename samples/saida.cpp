#include <iostream>

using namespace std;

int main()
{
  int quantidadeUvas = 10;
  int quantidadeBananas = 12;
  int quantidadePeras = 15;

  int total = quantidadeUvas + quantidadeBananas + quantidadePeras;

  cout << "---- Estoque -----" << endl;
  cout << "Quantidade Uvas: " << quantidadeUvas << endl;
  cout << "Quantidade Bananas: " << quantidadeBananas << endl;
  cout << "Quantidade Peras: " << quantidadePeras << endl;
  cout << "Total de frutas: " << total << endl;
}