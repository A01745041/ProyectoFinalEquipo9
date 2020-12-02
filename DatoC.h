#ifndef DATOC_C
#define DATOC_C

#include <iostream>
#include <string>
using namespace std;

class DatoC{ //Datos_cliente
    private:
    int num_compra;
    string codigo_rastreo;
    string nombre;
    string direccion;
    string telefono;
    string email;
    public:
    DatoC(){
        num_compra = 1010;
        codigo_rastreo = "AOTY6";
        nombre=  "Nairobi";
        direccion = "Calle Paloma";
        telefono = "5567984334";
        email = "nairobi@gmail.com";
    }
    DatoC(int num_compra,string codigo_rastreo,string nombre,string direccion, string telefono,string email){ 
        this -> num_compra = num_compra;
        this -> codigo_rastreo  = codigo_rastreo;
        this -> nombre  = nombre;
        this -> direccion  = direccion;
        this -> telefono  = telefono;
        this -> email = email;
    }
    ~DatoC(){
        //Destructor
    }
    int getNumCompra(){return num_compra;}
    string getCodigo_Rastreo(){return codigo_rastreo;}
    string getNombre(){return nombre;}
    string getDireccion(){return direccion;}
    string getTelefono(){return telefono;}
    string getEmail(){return email;}
    void setNumCompra(int nc) {num_compra = nc;}
    void setCodigo_Rastreo(string cod){codigo_rastreo = cod;}
    void setNombre(string nom){nombre = nom;}
    void setDireccion(string direc){direccion = direc;}
    void setEmail(string em){email = em;}
    void setTelefono(string tel){telefono = tel;}

    void confirmarorden(string respuestas){
        if (respuestas == "Si"){
            cout << "Se confirma orden" << endl;
        }
        else {
            cout << "La orden no fue confirmada" << endl;
        }

    }
    void guardardatos(string respuestas){
        if (respuestas == "Si"){
            cout << "Los datos fueron almacenados correctamente" << endl;
        }
        else {
            cout << "Ningun dato se almaceno ya que la orden no fue confirmada" << endl;
        }
        
    }
    void imprimir(string respuestas){
        if (respuestas == "Si"){
            cout << "Los datos almacenados se imprimiran en la pantalla: \n";
            cout << "\t Numero de compra: " << num_compra << endl;
            cout << "\t Codigo de rastreo: " << codigo_rastreo << endl;
            cout << "\t Nombre: " << nombre << endl;
            cout << "\t Direccion: " << direccion << endl;
            cout << "\t Telefono: " << telefono << endl;
            cout << "\t Email: " << email << endl;

        }
        else{
            cout << "Como no se almacenaron datos, no se imprime nada" << endl;
        }
    }
        
};
 #endif    