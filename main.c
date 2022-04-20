#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int opcion, i;
	char nombre[3][20];
	char apellido [3][20];
	int edad[3];
	int sexo[3];
	int est_civil [3];
	bool bandera = true;
	
	while (bandera) {
		printf("\nElige una opcion:\n1 Registrar\n2 Mostrar\n3 Salir\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				for(i=0; i<=2; i++){
					printf("Registro %d\n", i+1);
					printf("Nombre: \n");
					scanf("%s", &nombre[i]);
					printf("Apellido: \n");
					scanf("%s", &apellido[i]);
					printf("Edad: \n");
					scanf("%d", &edad[i]);
					printf("1: Femenino\n2: Masculino:\n");
					scanf("%d", &sexo[i]);
					printf("1: Soltero\n2: Casado\n3: Viudo\n");
					scanf("%d", &est_civil[i]);
				}
				break;
			case 2:
				for(i=0; i<=2; i++){
					printf("Nombre y Apellido: %s %s \n", nombre[i], apellido[i]);
					printf("Edad: %d ", edad[i]);
					printf("Año de nacimiento: %d\n", 2020-edad[i]);
					switch(sexo[i]){
						case 1:
							printf("Sexo: Femenino\n");
							break;
						case 2:
							printf("Sexo: Masculino\n");
							break;
						default:
							printf("Opcion No Valida\n");
					}
					switch(est_civil[i]){
						case 1:
							printf("Estado Civil: Soltero\n\n");
							break;
						case 2:
							printf("Estado Civil: Casado\n\n");
							break;
						case 3:
							printf("Estado Civil: Viudo\n\n");
							break;
						default:
						printf("Opcion No Valida\n\n");		
					}
				}
				break;
			case 3:
				bandera = false;
				break;
				
				
			default:
				printf("Seleccione una opcion valida\n");		
				
		}
		
	}
		
}
