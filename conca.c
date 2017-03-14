#include <stdio.h>
#include <stdlib.h>


int longCadena(char *cad){
	/*Programa que retorna la longitud de la cadena de entrada cad")*/
	int n = 0;
	while (cad[n] != '\0')
		n+=1;
	
	return n;	
}

char *concatenar(char *cadOrigen,char *cadDestino){
	int i,j;
	int m=longCadena(cadOrigen);
	int n=longCadena(cadDestino);
	char *cad3=(char *)malloc(m+n+1);
	
	for (i=0;i<m;i++){
		cad3[i]=cadOrigen[i];
		for (j=0;j<n;j++){
			cad3[j+m]=cadDestino[j];
		
		
		}
	}
	return cad3;
}


int main(int argc,char *argv[]){
	char *cadena1=argv[1];
	char *cadena2=argv[2];
	char *cad=concatenar(cadena1,cadena2);
	printf("\n%s\n",cad);
	return 0;
}
