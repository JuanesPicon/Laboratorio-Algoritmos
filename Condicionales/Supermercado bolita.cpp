#include <iostream>
using namespace std;

float Vpagar, desc, precio;
int num;

int main(int argc, char** argv) {
  cout << "Numero de bolita: ";
  cin >> num;
  cout << "Valor de la compra: ";
  cin >> precio;

  if (num == 1) { 
    cout << "No hay descuento :(" << endl;
    desc = 0; 
  } else if (num == 2) { 
    desc = precio * 0.09;
  } else if (num == 3) { 
    desc = precio * 0.30;
  } else if (num == 4) { 
    desc = precio;
  } else {
    cout << "numero de bolita invalido" << endl;
    desc = 0;
  }

  cout << "El descuento es de: " << desc << endl;
  cout << "El Valor total a pagar es: " << precio - desc << endl;

  return 0;
}