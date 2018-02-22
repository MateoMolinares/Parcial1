#include <iostream>

using namespace std;

int main()
{
  float rebaja=0, monto=0, descuento=0, total=0;
  cout<< "Ingrese monto: ";
  cin>> monto;
  if (monto>10000)
  {
      descuento= monto*0.2;
      total= monto-descuento;
      cout<< "Rebaja del producto: " << total;
  }

  else
  {
      descuento= monto*0.1;
      total= monto-descuento;
      cout<< "Rebaja del producto: " << total;
  }
    return 0;
    }
