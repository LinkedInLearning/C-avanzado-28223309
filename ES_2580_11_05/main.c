/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include "empleado.h"

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