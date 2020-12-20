/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int numProductos;
    printf("¿Cuantos productos vendiste ayer?: ");
    scanf("%d", &numProductos);

    float *numProductosVendidos = (float *) malloc(numProductos * sizeof(float));

    for (int i = 0; i < numProductos; i++)
    {
        printf("Introduce el precio del producto %d: ", i+1);
        scanf("%f", &numProductosVendidos[i]);
    }
    

    return 0;
}
