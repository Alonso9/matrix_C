#include <stdio.h>

float m1[10][10], m2[10][10], mr[10][10], suma = 0;

void main(){
    int c1, f1, c2, f2, x, y;

    printf("Ingresa numero de columnas y filas de la primera matriz:\n");
    scanf("%d%d",&c1,&f1);

    
    printf("Ingresa numero de columnas y filas de segunda la matriz:\n");
    scanf("%d%d",&c2,&f2);

   
    /////////////Evaluar fila y columna///////////////
    if(f1!=c2){
        printf("Las matrices no se  pueden multiplicar, no\ncumplen con los parametros requeridos.\n");
    }
    else{
        printf("Ingresa valores de la primra matriz:\n");
        for(x=0; x<c1; x++){
            for(y=0; y<f1; y++){
                scanf("%f",&m1[x][y]);
            }
        }

        printf("Ingresa valores de la segunda matriz:\n");
        for(x=0; x<c2; x++){
            for(y=0; y<f2; y++){
                scanf("%f",&m2[x][y]);
            }
        }
//////////////////////////multiplicacion/////////////////////////////////
        for(x=0; x<c1; x++){
            for(y=0; y<f2; y++){
                for(int k=0; k<f2; k++){
                    suma = suma + (m1[x][k] * m2[k][y]);
                }
                mr[x][y] = suma;
                suma = 0;
            }
        }

        printf("El Producto de la matriz e:\n");
        for(x=0; x<c1; x++){
            for(y=0; y<f2; y++){
                printf("%.1f\t",mr[x][y]);                
            }
            printf("\n");
        }
    }
}