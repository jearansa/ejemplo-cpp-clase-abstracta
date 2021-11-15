
#ifndef EMPLDISTR_H
#define EMPLDISTR_H 1

#include "Asal.h"

/*
 En la cabecera se debe declarar la herencia,
 y el tipo de la misma (public, private o nada):
 */
class EmplDistr: public Asal{
  // Atributos de instancia
  private:
           string region;
           /* El atributo "plus: double" es igual para toda la clase
            (pero no lo hemos hecho constante de clase) */
           static double plus;
  public:
         // Constructor
         EmplDistr(string, long, double, string);
         // M�todos de instancia:
         string getRegion ( );
         void setRegion (string);
         /* Si no declaramos y definimos el m�todo "getPlus(): double"
            en las clases derivadas, las mismas seguir�an
            siendo abstractas */
         double getPlus ( );
};

#endif
