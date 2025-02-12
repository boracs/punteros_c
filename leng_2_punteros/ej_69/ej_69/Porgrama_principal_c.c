




#include<stdio.h>
#include<Windows.h>
#define TAM 5


void visualizaerMayorYMneor(int tabla[], int n, int* max, int* min);
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	

	/*
	69) Pedir 5 números enteros, llamar a una función que nos busque el mayor y el menor y visualizar el nº mayor y el nº menor.
	*/

	int tabla1[TAM];
	int max = 0;
	int  min =100;

	for (int i = 0; i < TAM; i++) {   //METO DATOS
		printf("Dame el numeor %d\n:", i);
		scanf_s("%d", &tabla1[i]);
	}

	for (int i = 0; i < TAM; i++) {  // IMPRIMO LA TABLA 
		printf("int numero %d es %d\n", i , tabla1[i]);
	}
    visualizaerMayorYMneor(tabla1, TAM, &max, &min ); //INCOVO LA FUNCION 

	printf("FUERA DE LA FUNC: min= %d y max = % d\n", min, max); //IMPRIMO VALORES
}
//IMOLEMENTACION DE LA FUNCION
void visualizaerMayorYMneor(int tabla[], int n, int* max, int* min) {
	for (int i = 0; i < n; i++) {
		if (tabla[i] > *max) {
			*max = tabla[i];
		}
		if (tabla[i] < *min) {
			*min = tabla[i];
		}
	}	
	printf("DENTRO DE LA FUNC: min= %d y max = % d\n", *min, *max);

}

