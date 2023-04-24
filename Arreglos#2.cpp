/* Declare un arreglo según la tabla y asigne los valores propuestos; imprima en pantalla los 
valores almacenados utilizando las funciones de E/S y formato adecuado.

[] [95.75] [] [87.91] [] [85.72] */

#include <iostream>
using namespace std;

void arreglos2();

void arreglos2(){
    float arreglo[] = {0, 95.75, 0, 87.91, 0, 85.72};
    for (int i = 0; i < 6; i++)
    {
        if (arreglo[i] == 0){
            cout<<"[]";
        }

        else{
            cout<<"["<<arreglo[i]<<"]";
        }
        cout<<" ";
    }
}