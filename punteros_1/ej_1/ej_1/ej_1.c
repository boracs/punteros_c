#include <stdio.h>
#include <string.h>

/*
1) Escribir una funci�n que reciba como par�metros una cadena de m�ximo 256
caracteres y un car�cter y devuelva los siguientes c�lculos en tres par�metros por
referencia:
	i) Veces: almacenar� el n�mero de veces que aparece el car�cter en la cadena.
	ii) Primera: almacenar� la primera posici�n en la que aparece el car�cter en la
cadena. Si no lo encuentra -1.
	iii) Ultima: almacenar� la �ltima posici�n en la que aparece el car�cter en la
cadena. Si no lo encuentra -1
	void funcion(char cadena[256], char caracter, int *veces, int *primera, int
	*ultima);

*/



void obtenDatos(char cadena[256], char caracter, int* veces, int* primera, int* ultima) {
	int primeraLetra = 0;
	for (int i = 0; cadena [i] != '\0'; i++) {  //llo llevo hastya distinto de nulll no hago i<256 ya que no quieo recorrer toda la cadena i esta vacia...
		if (cadena[i] == caracter) {
			if (primeraLetra == 0) {
				*primera = i;
				*ultima = i;
				primeraLetra = 1;
				(*veces)++;
			}
			else {
				*veces = (*veces)+1;  //no me funciona ni esot ni la linea d eabajao porque ? 
				// (*veces)++;
				*ultima = i;
			}
		}
	}
	if (primeraLetra == 0) {
		*primera = -1;
		*ultima = -1;
	}


}




main() {
	printf("Dmae una frase\n");
	char frase[256];
	gets(frase);
	printf("Dmae un caracter que desees buscar\n ");
	char car;
	scanf_s("%c", &car, 1);

	int posPrimera;
	int posUltima;
	int veces;
	int longCadena = strlen(frase);

	obtenDatos(frase, car, &veces, &posPrimera, &posUltima);


	printf("ser repite %d veces la primera es %d y la ultima es %d ", veces, posPrimera, posUltima);


}


