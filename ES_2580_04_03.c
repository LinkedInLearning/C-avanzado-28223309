/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string.h>

int main(){

    char nombreCompleto[20] = "Eliezer Lopez";
    char mensajeDeBienvenida[150] = "Hola ";

    strcat(mensajeDeBienvenida, nombreCompleto);
    // Hola Eliezer Lopez

    return 0;
}