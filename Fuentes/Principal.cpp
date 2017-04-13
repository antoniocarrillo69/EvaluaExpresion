#include "Evaexpc.hpp"
#include "Definiciones.hpp"
#include <stdio.h>

int main(void)
{
   ldouble a;
   ldouble b[]={1.0,2.0,3.0,4.0,5.0};
   Evalua_expresion_cadena ev;

   ev.Expresion_cadena("X=x*x");
   ev.Evalua_expresion(b, 5);

#ifdef __Double__
   for (int i=0;i<5;i++) printf("%lf\n",b[i]);
#else
   for (int i=0;i<5;i++) printf("%Lf\n",b[i]);
#endif
   
   
   a = ev.Evalua_expresion("X=5.0+8.3*sinl(M_PI/2.0)");
#ifdef __Double__
   printf("%lf\n",a);
#else
   printf("%Lf\n",a);
#endif

   
   return 0;    
}



/*
#include "Evaexpc.hpp"
#include <stdio.h>

int main(void)
{
   const char *Exp[] = {
      "X=4554*(4/3)+3233",
      "X=32723832*3223*2323*233232*23",
      "X=sinl(M_PI_4)",
      "X=43232+32323+232323+2323+232323",
      "X=23+23232*(1221-3232)*121/4"
   };

   
   double l;
   int i;
   
   Evalua_expresion_cadena a;
   for(i = 0; i < 5; i++)
   {      
      l = a.Evalua_expresion(Exp[i]);
      printf("\nEvaluacion de la expresion: %s es %lf\n",Exp[i],l);
   }
   return 0;
}

*/
