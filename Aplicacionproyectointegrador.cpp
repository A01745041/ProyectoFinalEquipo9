//Aplicación Proyecto integrador
//Paulina Yasaret Chávez Roldán A01751696\
Ainhara Itzae Mejia Rivera A01745041


#include "Etapados.h" //Clase individual Paulina Yasaret Chávez Roldán
#include "DatoC.h"
#include "Paquete.h"
#include "Sistema.h"
#include "Etapa.h"
#include "Etapauno.h" // Clase individual Ainhara itzae Mejia rivera
#include <iostream>
#include <string>
using namespace std;


int main(){
cout << "Aplicacion Proyecto" << endl;
    DatoC cli1 = {2021, "JO899j", "Jorge" , "Calle Pinguino" , "5575832329", "jorge@hotmail.com"};
    DatoC cli2 = {1321, "HTN37", "Lupita" , "Calle Magnolia" , "55787144312", "lupitam@hotmail.com"};
    cout << "El cliente 1 corresponde a : " << cli1.getNombre() << ". Con un numero telefonico de: " << cli1.getTelefono() << ". Su numero de compra es el: " << "(" << cli1.getNumCompra() << ")"  << endl;
    cout << "El cliente 2 corresponde a: " << cli2.getNombre() << ". Con un numero telefonico de: " << cli2.getTelefono() << ". Su numero de compra es el: " << "(" << cli2.getNumCompra() << ")"  << endl;
    cli1.imprimir("No");
    cout << "El numero de rastreo del cliente 1 es: " << cli1.getCodigo_Rastreo() << endl;
    cout << "La direccion del cliente  2 es: " <<  cli2.getDireccion() <<endl;
    cli2.imprimir("Si");
    Paquete pa1 = {123456, "Lonchera roja", "Queretaro"};
    pa1.empaquetar();
    pa1.mandar();
    //Clases individuales
    Etapauno e1 = {}; // Ainhara
    e1.Reembolso();
    Etapados e2 = {}; //Paulina
    e2.retroalimentacion();
 
    return 0;
}


