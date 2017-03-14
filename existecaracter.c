#include <stdio.h>
#include <stdlib.h>

int longCadena(char *cad){

	int n=0;
	while(cad[n] != '\0'){
		n+=1;
	}
	return(n);
}

void existecaracter(char *c, char x){
	int m = longCadena(c);
	for (int i = 0; i < m; ++i){
		char t=c[i];
		if(t==x){
			printf("Existe el caracter\n");
		}	
		else 
			printf("\nNo existe el caracter\n");
			break;
	}
	
}

int main(int argc, char *argv[]){
	char *cad=argv[1];
	char *cadx=argv[2];
	char x=cadx[0];
	existecaracter(cad,x);
}