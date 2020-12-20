/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    // int *p_identificadorEmpleado;
    // float *p_sueldoAnual;
    char *p_letraDNI;

    int identificadorEmpleado = 1213;
    float sueldoAnual = 60000;
    char letraDNI = 'a';

    int *p_identificador = &identificadorEmpleado;
    float *p_sueldoAnual = &sueldoAnual;
    p_letraDNI = &letraDNI;

    return 0;
}