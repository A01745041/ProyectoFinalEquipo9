//Actividad 7
//Paulina Yasaret Chávez Roldán A01751696 
//Ainhara Itzae Mejia Rivera A01745041
#ifndef ETAPA_C
#define ETAPA_C
#include <iostream>
#include <string>
using namespace std;

class Etapa{
    private:
        string retro;
        int codigo;
        int cvendedor;
        string descripcion;
        float precioproducto;
        int diasen;

    public: 
    Etapa(){
        retro = "Buen producto llego en buen estado";
        codigo = 102345;
        cvendedor= 12345;
        descripcion = "Mochila verde de doce cm";
        precioproducto = 12.34;
        diasen = 15;
    }
    Etapa(string descripcion, float precioproducto, int codigo, int cvendedor, string retro, string preguntas){ 
        this -> retro = retro;
        this -> codigo  = codigo;
        this -> cvendedor = cvendedor;
        this -> descripcion = descripcion;
        
        this -> precioproducto = precioproducto;
        this -> diasen = diasen;


    }

    ~Etapa(){//Destructor
    }
    //Getters
    string getRetro(){return retro;}
    int getCodigo(){return codigo;}
    int getCvendedor(){return cvendedor;}
    string getDescripcion(){return descripcion;}
    
    float getPrecioProducto(){return precioproducto;}
    int getDiasen(){return diasen;}


    //Setters
    void setRetro(string rt){retro = rt;}
    void setCodigo(int cdg){codigo = cdg;}
    void setCvendedor(int cdvd){cvendedor = cdvd;}
    void setDescripcion(string desc){descripcion = desc;}
    void setPrecioProducto(float pr){precioproducto = pr;}
    void setDiasen(int di){diasen = di;}
   


    void identificar(string answer){
        if (answer == "Si"){
        cout << "Usted es :" << codigo << endl; 
        cout<< "Usted compró:" << descripcion << "de:" <<getCvendedor() << endl;
        }
    }
    void enviar(){
        cout<< "Usted compró" <<getDescripcion()<< endl;
        cout << "Los días que tardara en llegar son:" << diasen << "gracias por su compra \n"; 
    }
    void descuentoprim ( string primer){
        cout << "La primera compra en el sistema aplica un descuento del diez por ciento \n";
        cout << "Si esta es su primera compra, teclee Si \n";
        if (primer == "Si"){
            float sactual = 0;
            float mult = 0;
            float supdate = 0;
            sactual = precioproducto;
            mult = sactual * 0.10;
            supdate = sactual - mult;
            precioproducto = supdate;
        }
        else {
            cout <<"Gracias por comprar de nuevo en este sistema" << endl;
        }
    }
};
#endif