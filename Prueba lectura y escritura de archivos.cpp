#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir()
{
    ofstream archivo;
    archivo.open("prueba.txt",ios::out);  //abre o crea el archivo

    if (archivo.fail()){
        cout<<"Error al abrir el archivo."<<endl;
        exit(1);
    }
    cout<<"Creando archivo"<<endl;
    archivo<<"Prueba de archivo #2.";
    archivo.close();
    cout<<"Archivo creado."<<endl;
}

void leer()
{
    ifstream archivo;
    string texto;

    archivo.open("Arch1.txt", ios::in); //Lectura de archivo
 
    if (archivo.fail()){
        cout<<"Error al abrir el archivo."<<endl;
        exit(1);
    }
    cout<<"Leyendo archivo. \n"<<endl;
    while(!archivo.eof()){
        getline(archivo,texto);   
        cout<<texto<<endl;
    }
    
    
    archivo.close();
}

int main()
{
    
    leer();

    cin.get();
    return 0;
}