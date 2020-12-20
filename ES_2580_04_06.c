/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string.h>

int main(){

    char origen[] = "eliezerlopez@linkedin.com";
    char proveedor[] = "eliezerlopez.com";

    char *dominio = strstr(origen, proveedor);

    return 0;
}