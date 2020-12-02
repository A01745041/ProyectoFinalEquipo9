#ifndef PAQUETE_C
#define PAQUETE_C


#include "DatoC.h"
#include <iostream>
#include <string>
using namespace std;


class Paquete{
    private:
    int codigoenvio;
    string des_producto;
    string lugar_envio;
    public:
    Paquete(){
        codigoenvio = 683892;
        des_producto = "Mochila verde";
        lugar_envio = "Michoacan";
    }
    Paquete(int codigoenvio, string des_producto, string lugar_envio){
        this -> codigoenvio = codigoenvio;
        this -> des_producto = des_producto;
        this -> lugar_envio = lugar_envio;
    }
    ~Paquete(){
        //Destructor
    }
    int getCodigoEnvio() {return codigoenvio;}
    string getDes_Producto() {return des_producto;}
    string getLugar_Envio() {return lugar_envio;}
    void setCodigoEnvio(int ce) {codigoenvio = ce;}
    void setDes_Producto(string prod){des_producto = prod;}
    void setLugar_Envio(string lug) {lugar_envio = lug;}

    void identificarpaquete(){
        cout << "Paquete identificado con los siguientes datos: " << endl;
        cout << "Codigo de envio: " << codigoenvio << endl;
        cout << "Descripcion producto: " << des_producto << endl;
        cout << "Lugar de envio: " << lugar_envio << endl; 
    }
    void empaquetar(){
        cout << "Su " << des_producto << " esta siendo empaquetado"<< endl;
    }
    void mandar(){
        cout << "El producto con codigo de envio: " << codigoenvio << " esta esperando a ser enviado" << endl;
        cout << "Gracias por realizar su compra. Su producto llegara pronto\n";
    }

};



#endif