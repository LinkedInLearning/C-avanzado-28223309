/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <stdlib.h>
#include <stdio.h>

/*
typedef struct {
    char *nombre;
    char *apellidos;
    float sueldoAnual;
} Empleado;

extern Empleado vendedor;
*/

void almacenarNombre(const char *n);
void almacenarApellidos(const char *a);
void almacenarSueldoAnual(float s);
float calcularSueldoMensual();
void mostrarAgradecimiento();

#endif