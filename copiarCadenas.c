#include <stdio.h>
#include <stdlib.h>

int longCadena(char *cad){
	/*Programa que retorna la longitud de la cadena de entrada cad")*/
	int n = 0;
	while (cad[n] != '\0')
		n+=1;
	
	return n;	
}

char *copiarCadenas(char *cadOrigen, char *cadDestino){
	/*Programa que copia la cadena cadOrigen en la cadena cadDestino*/
	int i=longCadena(cadOrigen);
	int n=0;
	for (n=0;n<=i;n++){
		cadDestino[n]=cadOrigen[n];
	
	}
	return cadDestino;
}	
int main (int argc, char *argv[]) {
	char *cadOrigen=argv[1];
	char *cadDestino;
	cadDestino=(char*)malloc(longCadena(cadOrigen)+1);
	copiarCadenas(cadOrigen,cadDestino);
	printf ("\n %s \n", cadDestino);
	return 0;
}  