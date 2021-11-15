
#include <cstring>
#include "EmplDistr.h"

double EmplDistr::plus = 15.0;

EmplDistr::EmplDistr(string n, long d, double sb, string r): Asal (n, d, sb){
          this->region = r;
}

string EmplDistr::getRegion ( ){
     return this->region;
}

void EmplDistr::setRegion (string nr){
     this->region = nr;
}

/*
    Aquí introducimos la definición del método "getPlus(): double"
    Esto nos asegura que la clase no sea abstracta
*/

double EmplDistr::getPlus ( ){
       return this->plus;
}
