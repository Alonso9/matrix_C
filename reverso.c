#include <stdio.h>
void main(){
    int n, i, array[100];
    printf("\tPrograma que reinscribe una cantidad a su inversa\n");
    printf("Ingresa numero de digitos de tu numero: ");
    scanf("%d",&n);

    printf("Ingresa numero un numero a la vez: \n");
    for(i=1; i<=n; i++){
        scanf("%d",&array[i]);
    }
    printf("El reverso es: ");
    for(i=n; i>=1; i--){
        printf("%d",array[i]);
    } 
    printf("\n");
}
