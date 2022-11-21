
#include <cstdlib>
#include <iostream>

#include "Asal.h"
#include "EmplProd.h"
#include "EmplDistr.h"

void muestraSalarioPuntero (Asal * a);

void muestraSalarioRef (Asal & a);

/* void muestraSalarioObjeto (Asal a); */

using namespace std;

int main ( ){

 /*
    Una de las consecuencias de que la clase "Asal"
    sea abstracta es que no podemos construir
    objetos de la misma:
    Asal a1 ("Juan Abad", 12345678, 1200); // Fallo de compilación
    Asal v [50]; // Fallo de compilación
  */

 Asal * pa1 = new EmplProd ("Juan Mota", 55333222, 1200, "noche");
 Asal * pa2 = new EmplProd ("Pedro Alvarez", 55333222, 1500, "tarde");
 Asal * pa3 = new EmplDistr ("Antonio Camino", 55333666, 1800, "Granada");
 Asal * pa4 = new EmplDistr ("Antonio Perez", 55333666, 2100, "Murcia");

 Asal * w [4] = {pa1, pa2, pa3, pa4};

 cout << "El salario de " << w[0]->getNombre( )
         << " es " << w[0]->getSalario( ) << endl;

 cout << "El salario de " << w[1]->getNombre( )
         << " es " << w[1]->getSalario( ) << endl;
 cout << "El salario de " << w[2]->getNombre( )
         << " es " << w[2]->getSalario( ) << endl;
 cout << "El salario de " << w[3]->getNombre( )
         << " es " << w[3]->getSalario( ) << endl;

 muestraSalarioPuntero(pa1);
 muestraSalarioRef (*pa1);

 system ("PAUSE");
 return 0;
}

void muestraSalarioPuntero (Asal * a){
     cout << "El salario del empleado " << a->getNombre( ) << endl;
     cout << "es de " << a->getSalario( ) << endl;
}

void muestraSalarioRef (Asal & a){
     cout << "El salario del empleado " << a.getNombre( ) << endl;
     cout << "es de " << a.getSalario( ) << endl;
}

/*
    El paso de objetos como parámetros lleva implícita la construcción,
    por medio del constructor de copia, de un objeto de la clase "Asal".
    Si la clase Asal es abstracta, el compilador no nos permite construir
    objetos de la misma, y por tanto obtendríamos un fallo de compilación
*/

/*void muestraSalarioObjeto (Asal a){

}*/
