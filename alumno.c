#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

//Implemente su código a continuación:

int procesar_archivo(char * path)
{
    struct alumno_t alumno;
    FILE* alumnos;
    alumnos = fopen(path,"r");
    int lectura;
    if(!alumnos)
    {
        printf("Error abriendo el archivo");
        return 66;
    }
        printf("Alumnos aprobados:\n");
    while(!feof(alumnos))
    {
        lectura = fread(&alumno, sizeof(struct alumno_t), 1, alumnos);
        if(!feof(alumnos)) {
        if(lectura != 1)
        {
            printf("Error leyendo el archivo");
            return 65;
        } else if(alumno.promedio >= 7)
    {
        printf("DNI: %d | Promedio: %d \n", alumno.dni, alumno.promedio);
    }
    }
    }
return 0;

}
