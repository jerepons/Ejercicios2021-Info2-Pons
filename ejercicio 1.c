#include <stdio.h>

int main()
{
	int i=0;
	float dato, promedio, suma=0;
	
	printf("\t\t EJERCICIO Nº1 Jeremias Pons\n\n");
	printf(" Al finalizar de cargar los valores digite 9999 para calcular el promedio.\n\n");
	printf(" Ingrese los valores para calcular el promedio presionando enter para guardarlos:\n");
	
	while(1){
		scanf("%f",&dato);
		
		if(dato == 9999){
			promedio = suma / i;
			printf("\n EL PROMEDIO ES:%.2f",promedio);
			break;
		}
		suma = suma + dato;
	    i++;
	}
	return 0;
}
