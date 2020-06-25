#include <stdio.h>
/**
 * Program in C for to fill an matrix 
 **/
float matrix[10][10]; //Matrix with size of 10x10

void main(){
    
    int c=0, r=0;
    
    printf("__Author__: Alonso \n");
    
    printf("Introduce the number of column: ");
    scanf("%d, ", &c);
    printf("Introduce the number of row: ");
    scanf("%d, ", &r);
    
    printf("Matrix with %d columns and %d rows\n", c,r);
    
    //Loop for introduce values into matrix
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            
            printf("Introduce value in position [%d], [%d]",i+1,j+1);
            scanf("%f",&matrix[i][j]);
        }
    }
    
    //Loop for print values into matrix
    printf("\nThe matrix is:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            
            printf("[%.2f]\t", matrix[i][j]);
        }printf("\n");
    }
    
}
