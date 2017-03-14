#include <stdlib.h>
#include <stdio.h>

int longCadena(char *cad){

	int n=0;
	while(cad[n] != '\0'){
		n++;
	}
	return(n);
}
void PosFincaracter(char *cad, char x){

	int n = longCadena(cad);
	int px;
	int i;

	for (int i = 0; i < n; ++i){

		char p = cad[n-i];
		int px = n-i;
		if(p==x)
		printf("Existe el caracter y su posicion al final es %d\n ",px); 

	}

}

int main(int argc, char *argv[]){
	
	char *cad1=argv[1];
	char *cadx=argv[2];
	char x = cadx[0];
			
	PosFincaracter(cad1, x);

}