//////////////////////////////////////////////////////////////////////////////////////////////
// Análizador de expresiones                                                                //
// Revisión: 3 de Noviembre del 2003                                                        //
//                                                                                          //
//                                                                                          //
// Análisis y Diseño y Programación:                                                        //
//                                                                                          //
// Nombre:   Antonio Carrillo Ledesma                                                       //
// E-mail:   acl@www.dynamics.unam.edu                                                      //
// Página:   http://www.dynamics.unam.edu/acl                                               //
//                                                                                          //
//                                                                                          //
// Este programa es software libre. Puede redistribuirlo y/o modificarlo                    //
// bajo los términos de la Licencia Pública General de GNU según es                         //
// publicada por la Free Software Foundation, bien de la versión 2 de                       //
// dicha Licencia o bien (según su elección) de cualquier versión                           //
// posterior.                                                                               //
//                                                                                          //
// Este programa se distribuye con la esperanza de que sea útil, pero SIN                   //
// NINGUNA GARANTÍA, incluso sin la garantía MERCANTIL implícita o sin                      //
// garantizar la CONVENIENCIA PARA UN PROPÓSITO PARTICULAR. Véase la                        //
// Licencia Pública General de GNU para más detalles.                                       //
//                                                                                          //
// Debería haber recibido una copia de la Licencia Pública General junto                    //
// con este programa. Si no ha sido así, escriba a la Free Software                         //
// Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.                            //
//                                                                                          //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __ARBOL_BINARIO_HPP__
#define __ARBOL_BINARIO_HPP__

///////////////////////////////////////////////////////////////////
//                                                               //
//                     Clase Arbol binario                       //
//                                                               //
///////////////////////////////////////////////////////////////////

#include <string.h>
#include "Cadenas.hpp"


#define PREORDEN                  0
#define INORDEN                   1
#define POSTORDEN                 2
                                  


// Estructura que contendra el contenido y tipo de nodo
typedef struct nodo_arbol
{
   nodo_arbol *NODO_IZQUIERDO;     // Apuntador al nodo hijo izquierdo
   nodo_arbol *NODO_DERECHO;       // Apuntador al nodo hijo derecho
   char       *NODO_CONTENIDO;     // Apuntador al contenido (El espacio se obtendra dinamicamente)
   int         NODO_TIPO;          // Indica el tipo de informacion que contendra el nodo
} NODO;



// Clase que maneja el arbol binario del analizador de expresiones
class Arbol_binario: public Cadenas 
{
   private:
                     // Variable de uso general
      char          *exp_tmp;                      
                     // Define el tamaño de la máxima cadena que se soportara al retornar la expresión
      unsigned int   Max_long_cadena;                

      
   protected:
                     // Puntero al nodo raiz
      NODO          *PTR_RAIZ;                           

      
            // Crea el nodo y copia a este la expresion pasada como parametro
      NODO *Crea_nodo(const char *exp, const int tipo);
            // Destruye el arbol
      void  Destruye_arbol(void);
            // Borra los nodos internos apartir de PTR_NODO
      void  Borra_nodos(NODO *ptr_nodo);
            // Recorrido en preorden
      void  Recorrido_preorden(NODO *ptr_nodo);
            // Recorrido en inorden
      void  Recorrido_inorden(NODO *ptr_nodo);
            // Recorrido en postorden
      void  Recorrido_postorden(NODO *ptr_nodo);


   public:

            // Retorna la expresion en el siguiente formato
            // Si TP es PREORDEN regresa le expresion en preorden
            //          INORDEN regresa le expresion en inorden
            //          POSTORDEN regresa le expresion en postorden
      void  Retorna_expresion(char *xexp, const int tp, const int lg);
};


#endif

