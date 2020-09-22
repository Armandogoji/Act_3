#include <stdio.h>


int main(){
    char nombre[20];
    unsigned int edad;

    //printf("Hola Mundo!\n");
    printf("Ingrese su nombre\n");
    fgets(nombre, sizeof(nombre),stdin);
    printf("Buenos Dias: %s\n", nombre);
    printf("Ingrese su edad\n");
    scanf("%u", &edad);
    printf("Cumpliras %u", edad+1);
    return 0;
}