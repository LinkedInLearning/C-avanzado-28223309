/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

void almacenarNombre(const char *n){
    vendedor.nombre = (char *) malloc(strlen(n)*sizeof(char));
    vendedor.nombre = strcpy(vendedor.nombre, n);
}

void almacenarApellidos(char *a){
    vendedor.apellidos = (char *) malloc(strlen(a)*sizeof(char));
    vendedor.apellidos = strcpy(vendedor.apellidos, a);
}

void almacenarSueldoAnual(float s){
    vendedor.sueldoAnual = s;
}

float calcularSueldoMensual(){
    return (vendedor.sueldoAnual/12);
}
