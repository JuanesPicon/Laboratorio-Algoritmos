#include <iostream>
using namespace std;

  int opcion;
  double num1, num2;

int main(int argc, char** argv) {

  cout << "Menu de opciones:" << endl;
  cout << "1. Sumar" << endl;
  cout << "2. Restar" << endl;
  cout << "3. Multiplicar" << endl;
  cout << "4. Dividir" << endl;
  cout << "Ingrese su opcion: ";
  cin >> opcion;

  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;

  switch (opcion) {
    case 1:
      cout << "Resultado: " << num1 + num2 << endl;
      break;
    case 2:
      cout << "Resultado: " << num1 - num2 << endl;
      break;
    case 3:
      cout << "Resultado: " << num1 * num2 << endl;
      break;
    case 4:
      if (num2 != 0) {
        cout << "Resultado: " << num1 / num2 << endl;
      } else {
        cout << "Error: Division por cero." << endl;
      }
      break;
    default:
      cout << "Opcion invalida." << endl;
  }

  return 0;
}