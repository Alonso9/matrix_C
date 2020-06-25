#include <stdio.h>
float m1[10][10], m2[10][10], mr[10][10];

void main(){
    int a,b,c,d;

    printf("Ingresa numero de columnas y filas de las matrices:\n");
    scanf("%d%d",&a,&b);

    printf("ingresa valor de la primera matriz:\n");
    for(c=0; c<a; c++){
        for(d=0; d<b; d++){
            scanf("%f",&m1[c][d]);
        }
    }
    printf("Ingresa valores de la segunda matriz:\n");
    for(c=0; c<a; c++){
        for(d=0; d<b; d++){
            scanf("%f",&m2[c][d]);
        }
    }

    ////////////////////////suma//////////////////////////////
    for(c=0; c<a; c++){
        for(d=0; d<b; d++){
            mr[c][d] = m1[c][d] + m2[c][d];
        }
    }
    ///////////////////////mostrar matriz////////////////////
    for(c=0; c<a; c++){
        for(d=0; d<b; d++){
            printf("%.1f\t",mr[c][d]);
        }
        printf("]\n");
    }
}