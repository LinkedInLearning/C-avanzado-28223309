/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include "empleado.h"
#include <stdio.h>
#include <string.h>

FILE *vendedor;

void almacenarNombre(const char *n){
    vendedor = fopen("empleado.txt", "at");
    if (vendedor != NULL){
        fputs(n, vendedor);
        fputs("\n", vendedor);
    }
    fclose(vendedor);
}

void almacenarApellidos(const char *a){
    vendedor = fopen("empleado.txt", "at");
    if (vendedor != NULL){
        fputs(a, vendedor);
        fputs("\n", vendedor);
    }
    fclose(vendedor);
}

void almacenarSueldoAnual(float s){
    vendedor = fopen("empleado.txt", "at");
    if (vendedor != NULL){
        fprintf(vendedor, "%f", s);
        fputs("\n", vendedor);
    }
    fclose(vendedor);
}

void mostrarAgradecimiento(){
    
    char mensaje[250] = "Gracias por introducir la información del empleado cuyo nombre es: ";
    char nombre[150];

    vendedor = fopen("empleado.txt","rt");
    fgets(nombre, 300, vendedor);

    strcat(mensaje, nombre);
    puts(mensaje);

    fclose(vendedor);
}

/*
float calcularSueldoMensual(){
    return (vendedor.sueldoAnual/12);
}*/