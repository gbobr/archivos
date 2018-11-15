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
		fprintf(stderr, "Error: Cantidad de alumnos no v�lida");
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


	//AGREGE A CONTINUACI�N SU C�DIGO
	//EL ARCHIVO DE SALIDA DEBE LLAMARSE 'salida.out'

        FILE *listado;
        listado= fopen("archivobinario.dat", "wb");
        fwrite(alumnos, sizeof(int),cant_alumnos,listado);
        fclose(listado);

	return 0;
}
