#include <stdio.h>

void main(){
    int m, n, c, d, mo[10][10], mt[10][10];

    printf("Ingresa numero de filas y columnas:\n");
    scanf("%d%d",&m,&n);

    printf("Ingrese valores a la matriz: \n");

    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
            scanf("%d",&mo[c][d]);
        }
    }

    for(c=0; c<m; c++){
        for(d=0; d<n; d++){
            mt[d][c] = mo[c][d];
        }
    }
    printf("Matriz transpuesta es:\n");
    for(c=0; c<n; c++){
        for(d=0; d<m; d++){
            printf("%d\t",mt[c][d]);
        }printf("\n");
    }
}
