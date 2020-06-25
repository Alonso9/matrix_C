#include <stdio.h>

void main(){
    int m, c, d, n, m1[10][10], m2[10][10], mr[10][10];
    printf("Ingresa filas y columnas de la matriz: \n");
    scanf("%d%d",&m, &n);
    printf("ingresa los elementos de la primera matriz\n");

    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
           scanf("%d",&m1[c][d]);
        }
    }
    printf("ingresa los elementos de la segunda matriz\n");

    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
           scanf("%d",&m2[c][d]);
        }
    }


    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
           mr[c][d] = m1[c][d] - m2[c][d];
        }
    }
    printf("La matriz de resusltado es:\n");
    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
           printf("%d\t",mr[c][d]);
        }printf("\n");
    }
}