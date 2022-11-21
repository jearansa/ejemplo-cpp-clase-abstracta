
#include <cstring>
#include "EmplProd.h"

double EmplProd::plus = 10.0;

EmplProd::EmplProd(string n, long d, double sb, string t): Asal(n, d, sb){
     this->turno = t;
}

string EmplProd::getTurno ( ){
     return this->turno;
}

void EmplProd::setTurno (string nt){
     this->turno = nt;
}

/*
   Aquí introducimos la definición del método "getPlus(): double"
   Esto nos asegura que la clase no sea abstracta
*/

double EmplProd::getPlus ( ){
       return this->plus;
}
