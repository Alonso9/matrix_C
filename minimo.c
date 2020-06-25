#include <stdio.h>

void main(){
    int array[100], minimo, size, i, posicion = 1;

    printf("Ingresa numero de elementos en el array: ");
    scanf("%d",&size);

    printf("Ingresa %d en el array\n",size);

    for(i =0; i<size; i++)
        scanf("%d",&array[i]);

    minimo = array[0];

    for(i=1; i<size; i++){
        if(array[i]<minimo){
            minimo = array[i];
            posicion = i +1;
        }
    }
    printf("El minimo numero es %d y se ubica en la posicion %d\n",minimo,posicion);
}