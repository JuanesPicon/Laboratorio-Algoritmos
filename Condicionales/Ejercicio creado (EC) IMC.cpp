#include <iostream>
using namespace std;
 float peso, altura, imc;
int main(int argc, char** argv) {
 

  cout << "Ingrese su peso en kilogramos: ";
  cin >> peso;

  cout << "Ingrese su altura en metros: ";
  cin >> altura;

  imc = peso / (altura * altura);

  cout << "Su IMC es: " << imc << endl;

  if (imc < 18.5) {
    cout << "Bajo peso" << endl;
  } else if (imc < 25) {
    cout << "Peso normal" << endl;
  } else if (imc < 30) {
    cout << "Sobrepeso" << endl;
  } else {
    cout << "Obesidad" << endl;
  }

  return 0;
}
