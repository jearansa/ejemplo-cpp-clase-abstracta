
#ifndef EMPLPROD_H
#define EMPLPROD_H 1

#include "Asal.h"

class EmplProd: public Asal {
      //Atributos de instancia
      private:
               string turno;
               /* El atributo "plus: double" es igual para toda la clase
                (pero no lo hemos hecho constante de clase) */
               static double plus;
      public:
      //Constructor
      EmplProd(string, long, double, string);
      //M�todos de instancia:
      string getTurno ( );
      void setTurno (string);
      /* Si no declaramos y definimos el m�todo "getPlus( ): double"
       en las clases derivadas, las mismas seguir�an
       siendo abstractas */
      double getPlus ( );
};

#endif
