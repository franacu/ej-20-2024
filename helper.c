//
// Created by Fran on 09/04/2024.
//

#include "helper.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

void completarSecciones(int archivos[CAPACIDAD_SECCION][NUM_SECCIONES])
{
    for(int i=0;i<CAPACIDAD_SECCION;i++)
    {
        for(int j=0;j<NUM_SECCIONES;j++)
        {
            printf("Ingrese codigo del archivo %d en la seccion %d:",i+1,j+1);
            scanf("%d",&archivos[i][j]);
        }
    }
    printf("\nArchivos ingresados:\n");
    for (int i = 0; i < CAPACIDAD_SECCION; i++)
    {
        for (int j = 0; j < NUM_SECCIONES; j++)
        {
            printf("Sección %d, Archivo %d: %d\n", j + 1, i + 1, archivos[i][j]);
        }
    }
}
void buscar(int codigo,int archivos[CAPACIDAD_SECCION][NUM_SECCIONES])
{
    for (int i = 0; i < CAPACIDAD_SECCION; i++)
    {
        for (int j = 0; j < NUM_SECCIONES; j++)
        {
            if(codigo==archivos[i][j])
            {
                printf("El codigo buscado esta en la seccion %d y archivo %d",j+1,i+1);
            }
        }
    }
}