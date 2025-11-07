#include <iostream>
using namespace std;

int main ()
{
  bool condicao = false;

  cout << "Condição 1: ";
  
  if (condicao)
  {
    cout << "Condição foi aceita" << endl;
  }
  else
  {
    cout << "Condição não foi aceita" << endl;
  }

  cout << endl << "Condição 2: ";
  
  //O sinal "!" faz com que a condição exerça o oposto de sua operação de verdadeiro ou falso
  if (!condicao)
  {
    cout << "Condição não foi aceita" << endl;
  }
  else
  {
    cout << "Condição foi aceita" << endl;
  }
}
