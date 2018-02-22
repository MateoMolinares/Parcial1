#include <iostream>//libreria

using namespace std;

int main()
{
    // definicion variables
    float area=0, pi=3.14, radio=0;
    cout<< "Ingrese radio: ";
    cin>> radio;

    //operaciones
    area= pi*radio*radio;
    if (area>5000)
    {
        cout<< "DATOS ERRONEOS";

    }
    else {
        cout << "Area: "<< area;

    }

    return 0;//consola
}
