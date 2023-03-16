#include <stdio.h>

int main (){
    printf("hola mundo");

    int numero = 10 ; 
    int *punt = &numero;

    printf("%d", punt);
    printf("%d", &numero);
    printf("%d", &punt);

    printf("%d", *punt );
    printf("%d", sizeof(numero));


    

    return 0;
}