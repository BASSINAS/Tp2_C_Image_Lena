#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>

double f(double x)
{
 return x*x;
}

void writeToAFile (double *tab, int taille)
{
   int i = 0;
   FILE *fp;
   fp=fopen("function.ascii","w"); // l’ouvrir en écriture
   for (i = 0; i<taille;i++) {
   fprintf(fp,"tab[%d] = %f \n",i+1,tab[i]); // écrire dans le fichier dans une boucle
}
fclose(fp);
}
