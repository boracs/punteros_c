




#include<stdio.h>
#include<Windows.h>
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	69) Pedir 5 n�meros enteros, llamar a una funci�n que nos busque el mayor y el menor y visualizar el n� mayor y el n� menor.
	*/

	int tabla[5];

	for (int i = 0; i < 5; i++) {
		printf("Dame el numeor %d:", i);
		scanf_s("%d", &tabla[i]);
	}




}

