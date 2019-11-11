#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fonction.h"

int main()
    {
        int i,j;                                    //declaration variable
        double a,b,pas,x,y;
        FILE *fp;                                   // declaration du pointeur sur file
        fp=fopen("function.txt","w");
        printf("tapez [a,b], pas: \n");
        scanf("%lf%lf%lf", &a, &b,&pas);-
        printf("Vous avez tapé [%f, %f],pas= %f\n",a,b,pas);
        int n=(b-a)/pas;
        printf("N iterations %d\n",n);
        x=a;
            for (i=0;i<n; i++)
                {
                    x+=pas;
                    y=f(x);
                    fprintf(fp,"%f,\t %f\n",x,y);
                    printf("%f\t f(%f) = %f\n",x,x,y);
                }
                fclose(fp);
 return 0;
}
