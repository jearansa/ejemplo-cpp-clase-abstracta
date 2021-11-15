//Fichero "Asalariado.cpp"

#include <string>
#include "Asal.h"

/*
   Lo �nico rese�able en esta clase es que no aparece
   la definici�n del m�todo "getPlus(): double",
   por ser el mismo abstracto
 */

using namespace std;

Asal::Asal(string n, long d, double sb){
   this->nombre = n;
   this->dni = d;
   this->salarioBase = sb;
}

string Asal::getNombre ( ){
     return this->nombre;
}

void Asal::setNombre (string nn){
     this->nombre = nn;
}

long Asal::getDni ( ){
     return this->dni;
}

void Asal::setDni (long nd){
     this->dni = nd;
}

/*
   Las definiciones de los m�todos "getSalario(): double"
   y "setSalario(double): void" pueden ser llevadas
   a cabo en la clase "Asal", haciendo uso del m�todo
   "getPlus(): double", que es abstracto
*/

double Asal::getSalario ( ){
       return this->salarioBase * (1 + this->getPlus() / 100);
}

void Asal::setSalario (double s){
     this->salarioBase = s / (1 + this->getPlus() / 100);
}

/*
    El m�todo abstracto, en este caso "getPlus(): double",
    no tiene declaraci�n, y por tanto no aparece en el fichero
    "Asal.cpp";
*/
