/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    char *apellidos;
    float sueldoAnual;
} Empleado;

Empleado vendedor;

void almacenarNombre(char *n);
void almacenarApellidos(char *a);
void almacenarSueldoAnual(float s);

int main(){
    
    char nombreTemporal[100];
    char apellidosTemporal[250];
    float sueldoAnualTemporal;

    puts("Por favor, introduce la siguiente información: ");
    printf("- Nombre: ");
    gets(nombreTemporal);
    almacenarNombre(nombreTemporal);

    printf("- Apellidos: ");
    gets(apellidosTemporal);
    almacenarApellidos(apellidosTemporal);

    printf("- Sueldo anual:");
    scanf("%f", &sueldoAnualTemporal);
    almacenarSueldoAnual(sueldoAnualTemporal);

    return 0;
}

void almacenarNombre(char *n){
    vendedor.nombre = (char *) malloc(strlen(n)*sizeof(char));
    vendedor.nombre = strcpy(vendedor.nombre, n);
}

void almacenarApellidos(char *a){
    vendedor.apellidos = (char *) malloc(strlen(a)*sizeof(char));
    vendedor.apellidos = strcpy(vendedor.apellidos, a);
}

void almacenarSueldoAnual(float s){
    vendedor.sueldoAnual = s;
}