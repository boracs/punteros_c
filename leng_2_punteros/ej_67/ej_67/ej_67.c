

#include<stdio.h>
#include<Windows.h>



//declaracion sin punteros
void cambioValores1(int n1, int n2);

//declaracion con puntero
void cambioValores2(int* n1,int* n2);


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*
67) Pedir dos números enteros, llamar a una función que intercambie sus valores y
visualizar los nuevos valores.
*/



//EJMPLO A 
	//ESTO lla  a la funcion 1º  ME CAMBIA EL VALRO UNICAMENTE DENTOR DE LA FUNCIO COMO PODEMOS VER 

	printf("dame el a numero\n");
	int a;
	scanf_s("%d", &a);
	
	printf("dame el b numero\n");
	int b;
	scanf_s("%d", &b);

	cambioValores1(a, b);

	printf("fuea d ela funcion a es %d y b es %d \n", a, b);

//EJEMPLO B
	//ESTO CAMBIA EL VALOR EN LA DIRECCION DE MEMORIA Y INFLUYE FUERA  DELA FUNCIION 

	printf("dame el f numero\n");
	int f;
	scanf_s("%d", &f);

	printf("dame el z numero\n");
	int z;
	scanf_s("%d", &z);

	cambioValores2(&f, &z);

	printf("fuera de la funcion  f es %d y z es %d \n", f, z);



}


//EJEMPLO A SOLO CAMBIA DENTOR DE LA FUNCUION SINN USAR PUNTEROS 
void cambioValores1(int n1, int n2) {
	int aux = n1;
	n1 = n2;
	n2 = aux;
	printf("dentor de la funcion  n1 es a=  %d,  n2 es b = %d \n", n1, n2);
}


//EJEMPLO B CAMBIA FUERA DE LA FUNCION TAMBIEN

void cambioValores2(int* n1, int* n2) {
	int aux = *n1;
	*n1 = *n2;
	*n2 = aux;
	printf("dentor de la funcion  n1 es f=  %d,  n2 es z = %d \n", *n1, *n2);
}