/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string.h>

int main(){

    char texto[50] = "LinkedIn";

    /*
    int posicion=0, numCaracteres=0;

    while(texto[posicion] != '\0'){
        numCaracteres++;
        posicion++;
    }*/

    int numCarcateres = strlen(texto);
    
    return 0;
}