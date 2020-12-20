/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){
    
    typedef struct {
        int identificador;
        char nombre[50];
        char apellidos[150];
        float sueldoAnual;
    } Empleado;

    Empleado profesor;

    Empleado empleado1, farmaceutico, eliezer;

    return 0;
}