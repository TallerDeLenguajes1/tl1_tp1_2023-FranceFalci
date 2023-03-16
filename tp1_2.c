#include <stdio.h>

int funcionCuadrado(int num);
void voidCuadrado(int num);
void Invertir(int a,int b);
void orden(int a,int b);


int main(){
    int numero = funcionCuadrado(3);
    printf("%d", numero);
    orden(2,4);
    voidCuadrado(6);
    Invertir(3,4);
}

int funcionCuadrado(int num){
    return(num*num);
}
void voidCuadrado(int num){
    int cuadrado = num *num;
    printf("%d", cuadrado);
}

void Invertir(a,b){
    int aux = a;
    a=b;
    b= a;
    printf("valor de a %d, valor de b %d", a,b);
}

void orden(a,b){
    int aux = a;
    if (a > b){
        printf("valor menor a %d, valor mayor b %d",a,b);
    }else{
        a = b;
        b = aux;
        printf("valor menor a %d, valor mayor b %d",a,b);

    }
}
