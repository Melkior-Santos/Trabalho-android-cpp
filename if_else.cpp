#include <iostream>
using namespace std;

int main ()
{
  int key = 10;

  //
  cout << "If/Else 1:" << endl;
  if (key == 9) //Caso a variavel key seja 9, exibira a mensagem "Key is 9"
  {
    cout << "Key is 9" << endl;
  }
  else //Caso a condicao nao seja atendida, exibira a mensagem "Key isn't
  {
    cout << "Key isn't 9" << endl;
  }

  cout << endl;

  cout << "If/Else 2:" << endl;
  if (key == 10) //Caso a variavel key seja 10, exibira a mensagem "Key is 10"
  {
    cout << "Key is 10" << endl;
  }
  else //Caso a condicao nao seja atendida, exibira a mensagem "Key isn't
  {
    cout << "Key isn't 10" << endl;
  }

  return 0;
}
