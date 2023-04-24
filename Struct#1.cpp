/* Ejercicio #1: Defina, declare e inicialice una estructura para almacenar la información de los dispositivos electrónicos 
(celular, tablet, Smart tv, laptop etc.) que distribuye la empresa “Conico”. Utilice el ciclo apropiado para imprimir en pantalla 
información almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato adecuado. */

#include <iostream>
using namespace std;

void estructuras1();

void estructuras1(){

struct Celular{
    char marca[100];
    char modelo[100];
    char precio[100];
    char color[100];
    char espacio[100];
    char disponibles[100];
};

struct Tablet{
    char marca[100];
    char modelo[100];
    char precio[100];
    char color[100];
    char espacio[100];
    char disponibles[100];
};

struct SmartTV{
    char marca[100];
    char modelo[100];
    char precio[100];
    char tamanio[100];
    char disponibles[100];
};

struct Laptops{
    char marca[100];
    char precio[100];
    char ram[100];
    char almacenamiento[100];
    char procesador[100];
    char tamanio[100];
    char disponibles[100];
};
    Celular arrayCel[] ={
        {"Samsung", "S23 Ultra", "1299 Dolares", "Negro", "512 GB", "24 Disponibles"},
        {"Samsung", "S21+", "679 Dolares", "Rojo", "126 GB", "06 Disponibles"},
        {"Apple", "iPhone 14 Pro", "1449 Dolares", "Blanco", "256 GB","21 Disponibles"},
        {"Apple", "iPhone XR", "229 Dolares", "Azul", "64 GB","02 Disponibles"}
    };
    cout<<"******************** Inicio Inventario Celulares ********************"<<endl;
    cout<<endl;
    for (int i = 0; i < 4; i++){
     cout<<arrayCel[i].marca<<" - "<<arrayCel[i].modelo<<" - "<<arrayCel[i].precio<<" - "<<arrayCel[i].color<<" - "<<arrayCel[i].espacio<<" - "<<arrayCel[i].disponibles<<endl;   
    }
    cout<<endl;
    cout<<"********************* Fin Inventario Celulares *********************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"******************** Inicio Inventario Tablets ********************"<<endl;
    cout<<endl;
    Tablet arrayTablet[] = {
        {"Samsung", "Galaxy Tab S8+", "929 Dolares", "Negro", "256 GB", "21 Disponibles"},
        {"Samsung", "Galaxy Tab A7 Lite", "139 Dolares", "Gris", "64 GB", "04 Disponibles"},
        {"Apple", "iPad Pro 2022", "1794 Dolares", "Gris Espacial", "1T","05 Disponibles"},
        {"Apple", "iPad Mini 2021", "419 Dolares", "Purpura", "64 GB","03 Disponibles"}
    };
    for (int i = 0; i < 4; i++){
     cout<<arrayTablet[i].marca<<" - "<<arrayTablet[i].modelo<<" - "<<arrayTablet[i].precio<<" - "<<arrayTablet[i].color<<" - "<<arrayTablet[i].espacio<<" - "<<arrayTablet[i].disponibles<<endl;   
    }
    cout<<endl;
    cout<<"********************* Fin Inventario Tablets *********************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"******************** Inicio Inventario SmartTV ********************"<<endl;
    cout<<endl;
    SmartTV arraySmartTV[] = {
        {"TCL", "Televisor LED", "399 Dolares", "42 Pulgadas", "10 Disponibles"},
        {"Samsung", "Televisor Smart TV", "799 Dolares", "50 Pulgadas", "04 Disponibles"},
        {"TCL", "Televisor Smart TV", "539 Dolares", "55 Pulgadas","05 Disponibles"},
        {"TCL", "Televisor Smart TV", "275 Dolares", "40 Pulgadas", "01 Disponibles"}
    };
    for (int i = 0; i < 4; i++){
        cout<<arraySmartTV[i].marca<<" - "<<arraySmartTV[i].modelo<<" - "<<arraySmartTV[i].precio<<" - "<<arraySmartTV[i].tamanio<<" - "<<arraySmartTV[i].disponibles<<endl;   
    }
    cout<<endl;
    cout<<"********************* Fin Inventario SmartTV *********************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"******************** Inicio Inventario Laptops ********************"<<endl;
    cout<<endl;
    Laptops arrayLap[] ={
        {"Acer", "1349 Dolares", "16 GB RAM", "SSD 1 TB", "Intel Core i7-11800H", "17.3 Pulgadas", "04 Disponibles"},
        {"Dell", "769 Dolares", "8 GB RAM", "SSD 222 GB", "Intel Core i5-4210U", "13 Pulgadas", "29 Disponibles"},
        {"HP", "289 Dolares", "4 GB RAM", "SSD 64 GB", "Intel Celeron N4000","14 Pulgadas","21 Disponiles"},
        {"Dell", "419 Dolares", "16 GB RAM", "SSD 1 TB", "Intel Celeron N4020","15.6 Pulgadas", "07 Disponibles"}
    };
    for (int i = 0; i < 4; i++){
        cout<<arrayLap[i].marca<<" - "<<arrayLap[i].precio<<" - "<<arrayLap[i].ram<<" - "<<arrayLap[i].almacenamiento<<" - "<<arrayLap[i].procesador<<" - "<<arrayLap[i].tamanio<<" - "<<arrayLap[i].disponibles<<endl;
    }
    cout<<endl;
    cout<<"********************* Fin Inventario Laptops *********************"<<endl;
}

