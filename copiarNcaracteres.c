#include <stdio.h>
#include <stdlib.h>

char * copiarNcaracter(char * cadOrigen ,char * cadDestino,int n){
	/*Programa que copia los primeros n caracteres de la cadena cadOrigen en la cadena cadODestino*/
	int i;
	for (i =0;i< n;i ++)
	cadDestino [i]=cadOrigen [i];
	return cadDestino ;
}
int main (int argc,char * argv []){
	char *s1=argv[1];
	char *cadN=argv[2];
	char *s2;
	int n=atoi(cadN);
	s2=(char*)malloc(n);
	copiarNcaracter(s1,s2,n);
	printf("\n%s\n",s2);
	return 0;
}