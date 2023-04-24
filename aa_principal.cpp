#include <iostream>
#include "Arreglos#1.cpp"
#include "Arreglos#2.cpp"
#include "Struct#1.cpp"
#include "Struct#2.cpp"
#include "Struct#3.cpp"
using namespace std;

void menu();

int main(){
    int opcPrinci;
    cout<<"------------ Menu Principal ------------"<<endl;
    cout<<"Que ejercicios desea realizar?"<<endl;
    cout<<"1. Arreglos"<<endl;
    cout<<"2. Estructuras"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>opcPrinci;
    system("cls");
    switch (opcPrinci){ /* Switch para las opciones, ya sea Arrelo, Estructuras o Salir. */
    case 1:
        int opcArreglos;
        cout<<"Cuales de los siguientes ejericios desea realizar?"<<endl;
        cout<<"1. Declare, inicialice el arreglo segun la tabla y los valores propuestos;imprima en pantalla los valores almacenados utilizando las funciones de E/S y formato adecuado.0 1 5 7 - M P 2 0 2 3"<<endl;
        cout<<"2. Declare un arreglo segun la tabla y asigne los valores propuestos; imprima en pantalla los valores almacenados utilizando las funciones de E/S y formato adecuado. [] [95.75] [] [87.91] [] [85.72]"<<endl;
        cin>>opcArreglos;

            switch (opcArreglos){ /* Switch para las opciones de ejercicios en arreglos */
            case 1:
                system("cls");
                arreglos1();
                cout<<endl;
                menu();
                break;
        
            case 2:
                system("cls");
                arreglos2();
                cout<<endl;
                menu();
                break; 

            default:
                system("cls");
                cout<<"Error en el sistema - Volviendo al Menu Principal"<<endl;
                cout<<endl;
                main();
                break;
        }
    break;
    
    case 2:
        int opcStruct;
        cout<<"Cuales de los siguientes ejericios desea realizar?"<<endl;
        cout<<"1. Defina, declare e inicialice una estructura para almacenar la informacion de los dispositivos electronicos (celular, tablet, Smart tv, laptop etc.) que distribuye la empresa Conico. Utilice el ciclo apropiado para imprimir en pantalla informacion almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato adecuado."<<endl;
        cout<<"2. Defina y declare una estructura para almacenar la informacion de los datos academicos y personales de los estudiantes de la carrera de Ingenieia en Sistemas de Informacion de la Universidad Centroamericana (UCA). Solicite los datos al usuario, utilice el ciclo apropiado para imprimir en pantalla la informacion almacenada y recuerde utilizar las funciones de E/S con el formato adecuado."<<endl;
        cout<<"3. Defina y declare una estructura para almacenar la informacion personal y profesional de 5 atletas olimpicos nicaraguenses. Utilice un ciclo para solicitar los datos al usuario, utilice un ciclo para imprimir los datos en pantalla y recuerde utilizar las funciones de E/S con el formato adecuado. En este ejercicio se deben anidar dos estructuras."<<endl;
        cin>>opcStruct;
            switch (opcStruct){ /* Switch para las opciones de ejercicios en arreglos */
            case 1:
                system("cls");
                estructuras1();
                cout<<endl;
                menu();
                break;
            
            case 2:
                system("cls");
                estructuras2();
                menu();
                break;

            case 3:
                system("cls");
                estructuras3();
                cout<<endl;
                menu();
                break;
            
            default:
                system("cls");
                cout<<"Error en el sistema - Volviendo al Menu Principal"<<endl;
                cout<<endl;
                main();
                break;
            }
    break;
    
    case 3:
        cout<<"Adioooos"<<endl;
    break;
    
    default:
        system("cls");
        cout<<"Opcion Incorrecta - Vuelva a intentarlo"<<endl;
        cout<<endl;
        main();
        break;
    }

    return 0;
}

void menu(){
    int opcMenu;
    cout<<endl;
    cout<<"Que desea realizar ahora"<<endl;
    cout<<"1. Volver al menu principal."<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcMenu;
    switch (opcMenu){
    case 1:
        system("cls");
        main();
        break;
    
    case 2:
        cout<<"Adios."<<endl;
        break;
    
    default:
        system("cls");
        cout<<"Opcion no valida - Vuelva a intentarlo"<<endl;
        menu();
        break;
    }
}