#include <stdio.h>

int main (void){
   int arregloNumeros[10];
   float suma;
   int i;
   for(size_t i = 0;i<10;i++){
    printf("Ingrese el numero %d: ",i);
    scanf("%d",&arregloNumeros[i]);
   }

   for(int i = 0;i<10;i++){
    suma += arregloNumeros[i];
   }

   suma /= 10;
   printf("El promedio es %.2f\n", suma);

    for(int i = 9; i >= 0;i--){
        printf("%d, ",arregloNumeros[i]);
    }

    return 0;
}