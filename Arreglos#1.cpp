/* Declare, inicialice el arreglo según la tabla y los valores propuestos;imprima en pantalla los 
valores almacenados utilizando las funciones de E/S y formato adecuado.
‘0’ ‘1’ ‘5’ ‘7’ ‘-‘ ‘M’ ‘P’ ‘2’ ‘0’ ‘2’ ‘3 */

#include <iostream>
using namespace std;

void arreglos1();

void arreglos1(){

    char arreglo[] = {'0', '1' , '5' , '7' , '-' , 'M' , 'P' , '2' , '0' , '2' , '3'};
    for (int i = 0; i < 11; i++){
        cout<< arreglo[i]<<"  ";
    }
}