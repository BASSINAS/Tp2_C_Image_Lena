#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fonction.h"

int main()
    {
        int i;                                    //declaration variable
        double a,b,pas,x;
        double *tab = NULL;
        printf(" a = ");
        scanf("%lf", &a);
        printf(" b = ");
        scanf("%lf", &b);
        printf(" pas = ");
        scanf("%lf", &pas);
        printf("Vous avez tapé [%f, %f],pas= %f\n",a,b,pas);
        int n=(b-a)/pas;
        // allocation dynamique du tableau
        tab = malloc(sizeof(double)*n);
        printf("N iterations %d\n",n);
        x=a;
            for (i=0;i<n; i++)
                {
                    x+=pas;
                    tab[i]=f(x);
                    //tab++;
                   // printf("%f,\t %f\n",x,*tab);
                    printf("%f\t tab[%f] = %f\n",x,x,tab[i]);
                }
               // fclose(fp);
 return 0;
}
