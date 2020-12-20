/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int identificadorEmpleado = 1994;
    int *p_identificadorEmpleado = &identificadorEmpleado;

    printf("La direccion de memoria inicial es: %p\n", p_identificadorEmpleado);

    int *p_identificadorIncrementado = p_identificadorEmpleado + 7;

    printf("La direccion de memoria incrementada es: %p\n", p_identificadorIncrementado);

    int *p_identificadorDecrementado = p_identificadorEmpleado - 8;

    printf("La direccion de memoria decrementada es: %p\n", p_identificadorDecrementado);

    return 0;
}