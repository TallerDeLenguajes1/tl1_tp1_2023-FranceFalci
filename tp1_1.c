#include <stdio.h>

int main (){
    printf("hola mundo");

    int numero = 10 ; 
    int *punt = &numero;

    printf("%d\n", punt);
    printf("%d\n", &numero);
    printf("%d\n", &punt);

    printf("%d\n", *punt );
    printf("%d\n", sizeof(numero));
    


    

    return 0;
}