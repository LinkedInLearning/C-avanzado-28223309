/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){

    puts("Unidad de Urgencias");
    puts("------------------------");

    int consultaLibre, numAvisos = 0;
    int *ordenConsultasLibres = (int *) malloc(numAvisos * sizeof(int));

    while(1){
        printf("Introduce la consulta que se ha quedado libre: ");
        scanf("%d", &consultaLibre);
        numAvisos++;
        ordenConsultasLibres = (int *) realloc(ordenConsultasLibres, numAvisos*sizeof(int));
        ordenConsultasLibres[numAvisos-1] = consultaLibre;
    }
    
    

    return 0;
}