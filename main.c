#include <stdio.h>
#include "helper.h"
#define NUM_SECCIONES 4
#define CAPACIDAD_SECCION 5
int main()
{
    int archivos[NUM_SECCIONES][CAPACIDAD_SECCION];
    int codigo;
    completarSecciones(archivos);
    printf("Ingrese codigo de archivo a buscar:");
    scanf("%d",&codigo);
    buscar(codigo,archivos);

    return 0;
}
