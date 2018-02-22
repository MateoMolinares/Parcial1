#include <iostream>

using namespace std;

int main()
{
    float sueldo=0, descuento=0, total=0;
    cout<< "Ingrese sueldo: ";
    cin>> sueldo;
    if (sueldo<=1000)
    {
        descuento= sueldo*0.1;
        total= sueldo-descuento;
        cout<< "Salario: " << total;
    }

    else if (sueldo>1000 && sueldo>=2000)
    {
       descuento= sueldo*0.05;
       total= sueldo-descuento;
       cout<< "Salario: " << total;
    }

    else if (sueldo>2000)
    {
        descuento= sueldo*0.03;
        total= sueldo-descuento;
        cout<< "Salario: " << total;
    }

    return 0;
    }


