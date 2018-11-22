#include<stdio.h>
#include<stdlib.h>

#define MAX_ALUMNOS 50

struct alumno_t {
	int dni;
	int promedio;
};

int main(int argc, char* argv[])
{
	int cant_alumnos, i;
	struct alumno_t alumnos[MAX_ALUMNOS];


	printf("Cuantos alumnos va a ingresar? (Maximo %d): ", MAX_ALUMNOS);
	scanf("%d", &cant_alumnos);

	if(cant_alumnos > MAX_ALUMNOS) {
		fprintf(stderr, "Error: Cantidad de alumnos no válida");
		return -1;
	}

	for(i=0 ; i < cant_alumnos ; i++) {
		printf("\n\n\n === Alumno %d de %d === \n", i, cant_alumnos);
		printf("\nIngrese el DNI: ");
		scanf("%d", &alumnos[i].dni);
		printf("\nIngrese el Promedio: ");
		scanf("%d", &alumnos[i].promedio);
	}

	printf("\n\n === Fin del ingreso, guardando datos ... ===");



	FILE *archivo;
	archivo = fopen("salida.out", "w");


	    if (!archivo){
            printf("Error: fichero creado");

        }

        fwrite(alumnos, sizeof(struct alumno_t), cant_alumnos, archivo);

        if(fclose(archivo))
            printf("\narchivo cerrado\n");
        else
            return 1;


	//AGREGE A CONTINUACIÓN SU CÓDIGO
	//EL ARCHIVO DE SALIDA DEBE LLAMARSE 'salida.out'

	return 0;
}
