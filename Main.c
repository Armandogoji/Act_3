#include <stdio.h>


int main(){
    char nombre[20];

    printf("Hola Mundo!\n");
    printf("Ingrese su nombre\n");
    fgets(nombre, sizeof(nombre),stdin);
    printf("Buenos Dias: %s\n", nombre);
    return 0;
}