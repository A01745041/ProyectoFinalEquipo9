// Pruebas clases creadas
//Ainhara Itzae Mejia Rivera A01745041
// Paulina Yasaret Chávez Roldán A01751696



#include "Etapauno.h"
#include "Sistema.h"
#include "DatoC.h"
#include "Paquete.h"
#include "Etapados.h"
#include <iostream>
#include <string>
using namespace std;



int main(){
    //Prueba get
    cout << "Pruebas constructor DatoC" << endl;
    DatoC d1{};
    cout << "\t(" << d1.getNombre() << ",";
    cout << d1.getNumCompra() << ",";
    cout << d1.getTelefono() << ",";
    cout << d1.getCodigo_Rastreo() << ",";
    cout << d1.getDireccion() << ",";
    cout << d1.getEmail() << ")\n";
    DatoC d2{2020, "DRO5668", "Ricardo" , "Calle Gavilan" , "5576143609", "rickycharms@hotmail.com"};
    cout << "Prueba con valores diferentes" << endl;
    cout << "\t(" << d2.getNombre() << ",";
    cout << d2.getNumCompra() << ",";
    cout << d2.getTelefono() << ",";
    cout << d2.getCodigo_Rastreo() << ",";
    cout << d2.getDireccion() << ",";
    cout << d2.getEmail() << ")\n";
    //Pruebas set
    d1.setNombre("Pato Celeste");
    d1.setNumCompra(7689);
    d1.setTelefono("5588997700");
    d1.setCodigo_Rastreo("HU578");
    d1.setDireccion("Boulevard Pinones");
    d1.setEmail("pacelest@hotmail.com");
    cout << "Los nuevos valores son: " << endl;
    cout << "\t(" << d1.getNombre() << ",";
    cout << d1.getNumCompra() << ",";
    cout << d1.getTelefono() << ",";
    cout << d1.getCodigo_Rastreo() << ",";
    cout << d1.getDireccion() << ",";
    cout << d1.getEmail() << ")\n";
    //Pruebas metodos
    d2.confirmarorden("Si");
    d2.guardardatos("Si");
    d2.imprimir("Si");
    // Pruebas Clase Paquete
    cout << "Pruebas Paquete" << endl;
    Paquete pa{};
    cout << "\t(" << pa.getCodigoEnvio() << ",";
    cout << pa.getDes_Producto()<< ",";
    cout << pa.getLugar_Envio() << ")\n";
    Paquete pe{74483, "Lonchera verde" , "Oaxaca"};
    cout << "Pruebas con valores diferentes \n" << endl;
    cout << "\t(" << pe.getCodigoEnvio() << ",";
    cout << pe.getDes_Producto()<< ",";
    cout << pe.getLugar_Envio() << ")\n";
    //Pruebas set 
    pa.setCodigoEnvio(97262);
    pa.setDes_Producto("Lapicera verde");
    pa.setLugar_Envio("Sonora");
    cout << "Los nuevos valores son: \n" << endl;
    cout << "\t(" << pa.getCodigoEnvio() << ",";
    cout << pa.getDes_Producto()<< ",";
    cout << pa.getLugar_Envio() << ")\n";
    //Pruebas identificarpaquete
    pa.identificarpaquete();
    pa.empaquetar();
    pa.mandar();
    //Pruebas Etapa dos: CLASE INDIVIDUAL
    cout << "Pruebas etapa dos: Clase Individual Paulina Chavez A01751696\n" << endl;
    Etapados e1{};
    e1.retroalimentacion();
    e1.imprimirretro();
    e1.enviar();

    //CLASE ETAPA
    //Pruebas Get
    cout << "Pruebas constructor Etapa" << endl;
    Etapa e3{};
    cout << e3.getRetro() << ",";
    cout << e3.getCodigo() << ",";
    cout << e3.getCvendedor() << ",";
    cout << e3.getDescripcion() << ",";
    cout << e3.getPrecioProducto() << ",";
    cout << e3.getDiasen() << ")";
    //Pruebas Set
    e3.setRetro("Muy buen producto");
    e3.setCodigo(7689);
    e3.setCvendedor(55556);
    e3.setDescripcion("Mochila azul");
    e3.setPrecioProducto(16.66);
    e3.setDiasen(15);
    cout << "Los nuevos valores son: " << endl;
    cout << e3.getRetro() << ",";
    cout << e3.getCodigo() << ",";
    cout << e3.getCvendedor() << ",";
    cout << e3.getPrecioProducto() << ",";
    cout << e3.getDiasen() << ")";
    //Pruebas metodos
    e3.identificar("Si");
    e3.enviar();
    e3.descuentoprim("Si");


    //CLASE SISTEMA
    cout << "Pruebas constructor Sistema" << endl;
    Sistema s1{};
    cout << s1.getCodigopro() << ",";
    cout << s1.getNumerocl() << ",";
    cout << s1.getEvalsis() << ",";
    cout << s1.getRespuesta() << ",";
    cout << s1.getPrecioproducto().getPrecioProducto() << ",";
   
    Sistema s2 {"Hola", 1922, 0167};
    cout << "Prueba con valores diferentes" << endl;
    cout << s2.getCodigopro()<< ",";
    cout << s2.getNumerocl() << ",";
    cout << s2.getEvalsis() << ",";
    cout << s2.getRespuesta()  << ",";
    cout << s2.getPrecioproducto().getPrecioProducto() << ")";

    //Pruebas Set
    s1.setCodigopro(19546);
    s1.setNumerocl(7689);
    s1.setEvalsis("Muy mal sistema");
    s1.setRespuesta("No me he puesto en contacto con el vendedor");
    s1.setPrecioproducto(e3);
    cout << "Los nuevos valores son: " << endl;
    cout << s1.getCodigopro() << ",";
    cout << s1.getNumerocl()<< ",";
    cout << s1.getEvalsis() << ",";
    cout << s1.getRespuesta() << ",";
    cout << s1.getPrecioproducto().getPrecioProducto() << ")";

    //Pruebas metodos
    s2.atender("No me he puesto en contacto con el vendedor");
    s2.preguntar(1);
    e3.getPrecioProducto();
    s2.descuentoprecio({});
    //Pruebas Etapa Uno: CLASE INDIVIDUAL
    cout << "Pruebas etapa uno: Clase individual Ainhara Itzae Mejia Rivera A01745041" <<endl;
    Etapauno ep1{};
    ep1.Enviarpre();
    ep1.Reembolso();
    ep1.contactarVendedor(2);

    return 0;
}