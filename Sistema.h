//ProyectoFinal
//Paulina Yasaret Chávez Roldán A01751696 
//Ainhara Itzae Mejia Rivera A01745041

#ifndef SISTEMA_C
#define SISTEMA_C
#include "Etapa.h"
#include <iostream>
#include <string>
using namespace std;


class Sistema{
    private:
     int numerocl;
     int codigopro;
     string evalsis;
     string respuesta;
     Etapa precioproducto;
    public: 
    Sistema(){
        codigopro = 55678;
        numerocl = 10000;
        evalsis = "El sistema funciono de maravilla";
        respuesta = "Me he mantenido en contacto con el vendedor";
        Etapa precioproducto = {};

    }
    Sistema (string respuesta, int codigopro, int numerocl){ //CONSTRUCTOR OHSI
        this -> codigopro = codigopro;
        this -> numerocl  = numerocl;
        this -> evalsis = evalsis;
        this -> respuesta = respuesta;

    }

    ~Sistema(){//DESTRUCTOR
    }

    //Getters
    int getCodigopro(){return codigopro;}
    int getNumerocl(){return numerocl;}
    string getEvalsis(){return evalsis;}
    string getRespuesta(){ return respuesta;}
    Etapa getPrecioproducto(){return precioproducto;}

    //Setters
    void setCodigopro(int cdgpr){codigopro = cdgpr;}
    void setNumerocl(int nml){numerocl = nml;}
    void setEvalsis(string evs){evalsis = evs;}
    void setRespuesta(string rps){respuesta = rps;}
    void setPrecioproducto(Etapa prs){precioproducto = prs;}

    void atender(string rep){
        cout << "Bienvenido al sistema de atencion poscompra \n";
        cout << "Por favor ingrese su respuesta a las preguntas enviadas anteriormente \n";
        setRespuesta(rep);
        cout << "Esta es la respuesta ingresada \n" << getRespuesta() << endl;

        }
    void preguntar( int opcion){
        cout << "De acuerdo a la llegada y evaluacion del producto, ¿desea hacer algun cambio?";
        cout << "1 Reembolso \n";
        cout << "2 Devolucion \n";
        cout << "3 Nada, estoy satisfecho con mi producto";
        if (opcion == 1){
            cout << "Tu producto es:" << getCodigopro() << endl;
            cout << "Ya se notifico al vendedor acerca del reembolso \n";
            cout << "En 12 horas nos pondremos en contacto con usted \n";
        } 
        if (opcion == 2){
            cout << "Tu codigo de cliente es:" << getNumerocl() << endl;
            cout << "El codigo de producto es " << getCodigopro() <<endl;
            cout << "Nos mantendremos en contacto con usted y el vendedor para hacer la devolucion \n";
        }
        if (opcion == 3){
            cout << "Nos da gusto que se encuentre satisfecho con su pedido. Esperamos que vuelva a comprar pronto \n";
        }
        else {

            cout << "Ingrese un código válido \n";

        }
    }
    
    void descuentoprecio ( int precioproducto) 
    {
        if (precioproducto >= 200){

            float sactual = 0;
            float mult = 0;
            float supdate = 0;

            sactual = precioproducto;
            mult = sactual * 0.5;
            supdate = sactual - mult;
            precioproducto = supdate;
        }
        else{
            cout << "El precio no entra en el rango del descuento \n";
        }


    }
};
#endif