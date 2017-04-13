//////////////////////////////////////////////////////////////////////////////////////////////
// Definiciones b�sicas                                                                     //
// Revisi�n: 24 de Junio del 2005                                                           //
//                                                                                          //
//                                                                                          //
// An�lisis y Dise�o y Programaci�n:                                                        //
//                                                                                          //
// Nombre:   Antonio Carrillo Ledesma                                                       //
// E-mail:   acl@www.mmc.igeofcu.unam.mx                                                    //
// P�gina:   http://www.mmc.igeofcu.unam.mx/acl                                             //
//                                                                                          //
//                                                                                          //
// Este programa es software libre. Puede redistribuirlo y/o modificarlo                    //
// bajo los t�rminos de la Licencia P�blica General de GNU seg�n es                         //
// publicada por la Free Software Foundation, bien de la versi�n 2 de                       //
// dicha Licencia o bien (seg�n su elecci�n) de cualquier versi�n                           //
// posterior.                                                                               //
//                                                                                          //
// Este programa se distribuye con la esperanza de que sea �til, pero SIN                   //
// NINGUNA GARANT�A, incluso sin la garant�a MERCANTIL impl�cita o sin                      //
// garantizar la CONVENIENCIA PARA UN PROP�SITO PARTICULAR. V�ase la                        //
// Licencia P�blica General de GNU para m�s detalles.                                       //
//                                                                                          //
// Deber�a haber recibido una copia de la Licencia P�blica General junto                    //
// con este programa. Si no ha sido as�, escriba a la Free Software                         //
// Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.                            //
//                                                                                          //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __DEFINICIONES_HPP__
#define __DEFINICIONES_HPP__



#define __Double__



#ifdef __Double__
   // Define ldouble como long double 
   typedef double ldouble;
#else
   // Define ldouble como double 
   typedef long double ldouble;
#endif




struct Dimension_Ventana {
    ldouble Xi;
    ldouble Xf;
    ldouble Yi;
    ldouble Yf;
    ldouble Zi;
    ldouble Zf;
};

struct Definicion_Ventana {
    int Xi;
    int Xf;
    int Yi;
    int Yf;
};


struct C_2D {
    ldouble X;
    ldouble Y;
};

struct C_3D {
    ldouble x;
    ldouble y;
    ldouble z;
};

// Coordenadas triples en formato entero
struct C_3I {
   int x;
   int y;
   int z;
};
   
// Coordenadas dobles en formato entero
struct C_2I {
   int x;
   int y;
};

// Manejo de colores
#ifndef __PROGRAMACION_BORLAND__
typedef int TColor;
#else
//extern TColor Colores_16[];
#endif


// Numeros complejos
#include <complex>
typedef std::complex <ldouble> cdouble;


#endif
