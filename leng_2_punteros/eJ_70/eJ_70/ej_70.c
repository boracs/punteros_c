

#include<stdio.h>
#include<Windows.h>
#define TAM 5
void calcula(int tabla[], int n, int* media, int* dif);

main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	70) Pedir 5 números enteros, llamar a una función que nos calcule: la media de los 5
	números y la diferencia entre el mayor y el menor, y visualizar esos valores. 
	*/
	int tabla[TAM] = { 12,16,10,20,11 };

	for (int i = 0; i < TAM; i++) {
		printf("Numero %d es %d\n", i, tabla[i]);
	}

	int dif = 0;
	int media = 0;
	

	calcula(tabla , TAM, &media, &dif);

	printf("la media es %d, y la diferencia %d\n", media, dif);

}

void calcula(int tabla[], int n, int* media, int* dif)
{
	int max = 0;
	int min = 100;
	int total = 0;
	for (int i = 0; i < n; i++) {
		total = total + tabla[i];

		if (max < tabla[i]) {
			max = tabla[i];
		}
		if (min > tabla[i]) {
			min = tabla[i];
		}
	}
	int avg = total / n;
	*media = avg;
	*dif = max - min;
}
