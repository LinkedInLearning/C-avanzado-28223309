/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int identificadorEmpleado = 1994;
    int *p_identificadorEmpleado = &identificadorEmpleado;

    printf("El contenido de la variable identificador es: %d\n", identificadorEmpleado);
    printf("El contenido de la variable identificador a traves del puntero es: %d\n", *p_identificadorEmpleado);

    int *p2_identificadorEmpleado = &identificadorEmpleado;
    int *p3_identificadorEmpleado;

    p3_identificadorEmpleado = p2_identificadorEmpleado;

    printf("El contenido del puntero p2 es: %p\n", p2_identificadorEmpleado);
    printf("El contenido del puntero p3 es: %p\n", p3_identificadorEmpleado);
    
    return 0;
}