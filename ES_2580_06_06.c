/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char nombreTemporal[100];
    char apellidosTemporal[250];

    puts("Por favor, introduce la siguiente información: ");
    printf("- Nombre: ");
    gets(nombreTemporal);

    printf("- Apellidos: ");
    gets(apellidosTemporal);

    typedef struct {
        char *nombre;
        char *apellidos;
    } Empleado;

    Empleado vendedor;

    vendedor.nombre = (char *) malloc(strlen(nombreTemporal)*sizeof(char));
    vendedor.apellidos = (char *) malloc(strlen(apellidosTemporal)*sizeof(char));

    vendedor.nombre = strcpy(vendedor.nombre, nombreTemporal);
    vendedor.apellidos = strcpy(vendedor.apellidos, apellidosTemporal);

    return 0;
}