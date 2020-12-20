/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int identificadoresEmpleados[10];

    // int *p_inicio = &identificadoresEmpleados[0];
    // int *p_fin = &identificadoresEmpleados[10];

    // int numElementos = p_fin - p_inicio;

    float sueldosAnualesEmpleados[10];

    float *p_inicio = &sueldosAnualesEmpleados[0];
    float *p_fin = &sueldosAnualesEmpleados[10];

    int numSueldos = p_fin - p_inicio;
    
    return 0;
}