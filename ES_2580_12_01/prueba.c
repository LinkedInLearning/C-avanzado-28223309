/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    FILE *prueba;
    prueba = fopen("prueba.txt", "at");

    if(prueba != NULL){
        putc('E',prueba);
    }

    fclose(prueba);
    return 0;
}