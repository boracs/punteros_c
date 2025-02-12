/*
72) Pedir tres números enteros, llamar a una función que realice lo siguiente:
	  n1 + n2			  n1 - n2
x= --------------- y = ---------------
		n3					n3
y que devuelva 1 si no puede realizar los calculos por ser n3 = 0 o un 0 si se
realizan los calculos y visualizar los valores de X e Y o el mensaje de error.
*/





#include<stdio.h>
#define TAM 5

int  calcular(int n1, int n2, int n3, float* x, float* y) {
	if (n3 == 0) {
		return 1;
	} else {
	 *x = (n1 + n2) / n3;
	 *y = (n1 - n2) / n3;
	return 0;
	}
}


main() {

	printf("Dame le numero 1; ");
	int n1;
	scanf_s("%d",&n1);
	printf("Dame le numero 2; ");
	int n2;
	scanf_s("%d",&n2);
	printf("Dame le numero 3; ");
	int n3;
	scanf_s("%d",&n3);

	//declaro x e y 
	float x;
	float y;

	//invoco almacenando lo que me devuelve en  response
	int response = calcular( n1, n2 , n3, &x , &y );

	if (response == 1) {
		printf("Nose pueod relizar la operacion porque el n3 es igual a 0");
	}
	else {
		printf("x = %.2f e y = %.2f", x, y);
	}

}