/*
71) Pedir 10 números enteros, llamar a una función que nos busque el mayor, el menor
	y nos calcule la media, y visualizar el nº mayor y su posición, el nº menor y su
	posición y la media de los 10 números.
*/
#include<stdio.h>
#define TAM 5



//pasando punteros evito adnar toda la informacion.
void calcular(int tabla[], int tamTabla, int* mayor, int* pMayor, int* menor, int* pMenor, float* avg) {
	int total = 0;
	for (int i = 0; i < tamTabla; i++) {
		if (*mayor < tabla[i]) {
			*mayor = tabla[i];
			*pMayor = &tabla[i];
		};
		if(*menor>tabla[i]) {
			*menor = tabla[i];
			*pMenor = &tabla[i];
		}
		total = total + tabla[i];
	}
	*avg = (float) total / tamTabla;
}



main() {
	int tabla[TAM];

	int mayor = 0;
	int *posMayor;

	int menor = 100;
	int *posMenor;

	float avg;

	for (int i = 0; i < TAM; i++) {
		printf("Dame el numero %d:-> ", i);
		scanf_s("%d", &tabla[i]);
	}

	//invoco al funcion
	 calcular(tabla, TAM, &mayor, &posMayor, &menor, &posMenor, &avg);
	 printf(" El numeor mayor  es %d pos en memoria = %p ____el numero menor es %d pos en memoria = %p y la media es %.2f", mayor, (void*)posMayor, menor,(void*) posMenor, avg);

	//imprimo los datos solicitados



}