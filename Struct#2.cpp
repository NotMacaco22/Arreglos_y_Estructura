/* Ejercicio #2: Defina y declare una estructura para almacenar la información de los datos académicos y personales de los 
estudiantes de la carrera de Ingeniería en Sistemas de Información de la Universidad Centroamericana (UCA). Solicite los datos
al usuario, utilice el ciclo apropiado para imprimir en pantalla la información almacenada y recuerde utilizar las funciones de 
E/S con el formato adecuado. */

#include <iostream>
#include <string.h>
using namespace std;

void estructuras2();

void estructuras2(){

struct Estudiantes{
    string nombre;
    string numCarnet;
    string semestre;
    string cantClases;
};

    int cantAlumnos;
    cout<<"Cuantos alumnos desea ingresar al sistema UCA?"<<endl;
    cin>>cantAlumnos;
    Estudiantes UCA[cantAlumnos];   /* Declaro la estructura en el main */
    system("cls");

    for (int i = 0; i < cantAlumnos; i++){
        cout<<"Ingrese en nombre del estudiante #"<<i+1<<"."<<endl;
        cin.ignore(); // Ignorar el salto de línea que queda después de leer la variable anterior
        getline(cin, UCA[i].nombre);
        cout<<"Ingrese el numero de carnet."<<endl;
        cin>>UCA[i].numCarnet;
        cout<<"Ingrese el semestre en el que se encuentra el estudiante."<<endl;
        cin>>UCA[i].semestre;
        cout<<"Ingrese la cantidad de clases que lleva el estudiante."<<endl;
        cin>>UCA[i].cantClases;
        system("cls");
    }
    
    cout<<"Informacion de los ultimos estudiantes ingresados."<<endl;
    cout<<endl;
    for (int j = 0; j < cantAlumnos; j++){
        cout<<"Estudiante #"<<j+1<<endl;
        cout<<"Nombre: "<<UCA[j].nombre<<endl;
        cout<<"Num. Carnet: "<<UCA[j].numCarnet<<endl;
        cout<<"Semestre: "<<UCA[j].semestre<<endl;
        cout<<"Cantidad de clases cursando: "<<UCA[j].cantClases<<endl;
    }
}
