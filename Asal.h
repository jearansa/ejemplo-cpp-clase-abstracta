//Fichero "Asal.h"

#ifndef ASAL_H
#define ASAL_H 1

#include <string>

using namespace std;

class Asal{
  //Atributos de instancia
  private:
           string nombre;
           long dni;
           double salarioBase;
  public:
           Asal (string, long, double);
           string getNombre ();
           void setNombre (string);
           long getDni ();
           void setDni (long);
           /* Una cosa interesante es que el método "getSalario(): double"
            ya no debe ser enlazado dinámicamente, hay una sola versión
            del mismo en la clase "Asal" que es la que se invoca siempre */
           double getSalario ();
           void setSalario(double);
           /* El método "getPlus(): double" es declarado como
              abstract en el fichero "Asal.h", por medio de la sintaxis "= 0;"
              Eso conlleva que el mismo no debe aparecer
              en el fichero "Asal.cpp".
              Es importante que el mismo lleve el modificador
              "virtual", ya que nos debemos asegurar de que sea
              enlazado de manera dinámica, y de que sea redefinido en
              las clases derivadas de "Asal" */
           virtual double getPlus() = 0;
};

#endif
