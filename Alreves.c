#include <stdio.h>
#include <stdlib.h>


int longCadena(char *cad){
	/*Programa que retorna la longitud de la cadena de entrada cad")*/
	int n = 0;
	while (cad[n] != '\0')
		n+=1;
	
	return n;	
}

char *Alreves(char *cadOrigen,char *cadDestino){
	int i;
	int j=longCadena(cadOrigen)-1;
	int f=longCadena(cadOrigen);
	for (i=0;i<f;i++){
		cadDestino[i]=cadOrigen[j];
		j-=1;
	}
	return cadDestino;
}

void Palindrome(char *cad){
	int i=0;
	int j=longCadena(cad)-1;
	int t=longCadena(cad);
	int n=0;
	while (cad[i] != '\0'){
		if (cad[i] == cad[j]){
			n++;
		}
		i++;
		j--;
	}		
	if (n==t){
		printf("\nLa palabra es palindrome\n");
		
	}
	else{
		printf("\nLa palabra No es palindrome\n");
			
	}
		
}

int main(int argc,char *argv[]){
	char *cad1=argv[1];
	char *cad2=(char *)malloc(longCadena(cad1)+1);
	Alreves(cad1,cad2);
	printf("\n%s\n",cad2);
	Palindrome(cad1);
	return 0;
	
	
}