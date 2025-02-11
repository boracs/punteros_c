




#include<stdio.h>
#include<Windows.h>

void cambioValores(int* n1, int* n2, int* n3);


main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	68) Pedir tres números enteros, llamar a una función que intercambie sus valores y visualizar los nuevos valores. (n1=n2, n2=n3, n3=n1)
	*/

	printf("Dame a\n");
	int a;
	scanf_s("%d", &a);

	printf("Dame b\n");
	int b;
	scanf_s("%d", &b);

	printf("Dame c\n");
	int c;
	scanf_s("%d", &c);

	printf("a=%d, b=%d, c=%d \n", a, b, c);
	//invooco la funcion 
	cambioValores( &a, &b,  &c);
	
	printf("tras invocar a la funcion: \n");
	printf("a=%d, b=%d, c=%d", a, b, c);

}

void cambioValores(int* n1, int* n2, int* n3) {
	int aux = *n1;
	*n1 = *n2;
	*n2 = *n3;
	*n3 = aux;
}
