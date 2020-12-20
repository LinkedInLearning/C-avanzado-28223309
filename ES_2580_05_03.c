/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){
    
    typedef struct {
        int identificador;
        char *nombre;
        char *apellidos;
        float sueldoAnual;
    } Empleado;

    Empleado profesor;
    profesor.identificador = 1994;
    profesor.nombre = "Eliezer";
    profesor.apellidos = "Lopez Rodriguez";
    profesor.sueldoAnual = 70500.48;

    printf("%s", profesor.nombre);
    profesor.sueldoAnual = profesor.sueldoAnual + 3500.50;
    profesor.sueldoAnual += 3500.50;

    return 0;
}