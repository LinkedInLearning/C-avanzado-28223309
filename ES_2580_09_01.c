/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int suma();

int main(){

    suma();
    suma();
    suma();

    return 0;
}

int suma(){

    int a,b,c;
    static int resultado = 0;
    printf("Comienzo: %d\n", resultado);
    
    a=1;
    b=2;
    c=3;

    resultado = resultado + a+b+c;
    printf("Fin: %d\n", resultado);
    return resultado;
}