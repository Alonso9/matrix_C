#include <stdio.h>

void main(){
    int n,reverso=0;
    printf("\tPrograma que invierte el orden de una cantidad ingresada\n");
    printf("Ingresa un numero: ");
    scanf("%d",&n);

    while(n!=0){
        reverso = reverso * 10;
        reverso = reverso + n % 10;
        n = n / 10;
    }
    printf("Reverso del numero es: %d",reverso);
    printf("\n");
}
