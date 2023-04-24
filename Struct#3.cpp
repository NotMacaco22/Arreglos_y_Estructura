/* Ejercicio #3: Defina y declare una estructura para almacenar la información personal y profesional 
de 5 atletas olímpicos nicaragüenses. Utilice un ciclo para solicitar los datos al usuario, utilice un 
ciclo para imprimir los datos en pantalla y recuerde utilizar las funciones de E/S con el formato adecuado. 
En este ejercicio se deben anidar dos estructuras. */

#include <iostream>
using namespace std;

void estructuras3();

void estructuras3(){

struct infoPer{
    string nombre;
    string cedula;
};

struct infoProfe{
    string deporte;
    string medallas;
};

struct atletaGeneral{
    infoPer apartadoPersonal;
    infoProfe apartadoProfesional;
};

    atletaGeneral Depo[5];   /* Declaro la estructura en el main */
    system("cls");

    for (int i = 0; i < 5; i++){
        cout<<"Ingrese en nombre del atleta #"<<i+1<<"."<<endl;
        cin.ignore();
        getline(cin, Depo[i].apartadoPersonal.nombre);
        cout<<"Ingrese el numero de cedula."<<endl;
        cin>>Depo[i].apartadoPersonal.cedula;
        cout<<"Ingrese el deporte en el participa el atleta."<<endl;
        cin>>Depo[i].apartadoProfesional.deporte;
        cout<<"Ingrese las medallas que tiene."<<endl;
        cin>>Depo[i].apartadoProfesional.medallas;
        system("cls");
    }
    
    cout<<"Informacion de los ultimos atletas ingresados."<<endl;
    for (int j = 0; j < 5; j++){
        cout<<"Atleta #"<<j+1<<endl;
        cout<<"Nombre: "<<Depo[j].apartadoPersonal.nombre<<endl;
        cout<<"Cedula: "<<Depo[j].apartadoPersonal.cedula<<endl;
        cout<<"Deporte: "<<Depo[j].apartadoProfesional.deporte<<endl;
        cout<<"Medallas: "<<Depo[j].apartadoProfesional.medallas<<endl;
        cout<<endl;
    }
}