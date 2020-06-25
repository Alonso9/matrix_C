#include <stdio.h>

void main(){
    int array[100], maximo, size , i, posicion = 1;

    printf("Ingresa numero de elementos en el array: \n");
    scanf("%d",&size);
    
    printf("Ingresa %d en el array: ",size);
    
    for(i=0; i<size; i++) 
        scanf("%d",&array[i]);

    maximo = array[0];

    for(i=1; i<size; i++){
        if(array[i]>maximo){
            maximo = array[i];
            posicion = i +1;
        }
    }
    printf("EL maximo valor esta %d y es: %d\n",posicion,maximo);
}