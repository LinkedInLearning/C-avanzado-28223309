/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include "empleado.h"
#include <stdio.h>

FILE *vendedor;

void almacenarNombre(const char *n){
    vendedor = fopen("empleado.txt", "rt");
    fclose(vendedor);
    vendedor.nombre = (char *) malloc(strlen(n)*sizeof(char));
    vendedor.nombre = strcpy(vendedor.nombre, n);
}

void almacenarApellidos(const char *a){
    vendedor = fopen("empleado.txt", char *modo);
    fclose(vendedor);
    vendedor.apellidos = (char *) malloc(strlen(a)*sizeof(char));
    vendedor.apellidos = strcpy(vendedor.apellidos, a);
}

void almacenarSueldoAnual(float s){
    vendedor = fopen("empleado.txt", char *modo);
    fclose(vendero);
    vendedor.sueldoAnual = s;
}

/*
float calcularSueldoMensual(){
    return (vendedor.sueldoAnual/12);
}*/