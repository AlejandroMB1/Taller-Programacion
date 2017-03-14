#include <stdio.h>


int longCadena(char *cad){
	/*Programa que retorna la longitud de la cadena de entrada cad")*/
	int n = 0;
	while (cad[n] != '\0')
		n+=1;
	
	return n;	
}

int main (int argc, char *argv [ ]) {
  char *cadEntrada = argv [1];
  int n = longCadena (cadEntrada);
  printf ("\n %d \n", n);
  return 0;
}  
 