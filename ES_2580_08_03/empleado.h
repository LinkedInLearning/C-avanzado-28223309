/*
 * Curso: C Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

typedef struct {
    char *nombre;
    char *apellidos;
    float sueldoAnual;
} Empleado;

void almacenarNombre(const char *n);
void almacenarApellidos(char *a);
void almacenarSueldoAnual(float s);
float calcularSueldoMensual();