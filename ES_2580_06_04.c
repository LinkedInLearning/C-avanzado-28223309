/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdlib.h>

int main(){

    int *array1 = (int *) malloc(150 * sizeof(int));
    float *array2 = (float *) malloc(150 * sizeof(float));
    char *array3 = (char *) malloc(150 * sizeof(char));

    free(array1);
    free(array2);
    free(array3);

    return 0;
}