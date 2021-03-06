/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    char *apellidos;
    float sueldoAnual;
} Empleado;

void almacenarNombre(const char *n);
void almacenarApellidos(char *a);
void almacenarSueldoAnual(float s);
float calcularSueldoMensual();

#endif