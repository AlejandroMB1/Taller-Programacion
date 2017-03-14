#include <stdio.h>
#include <stdlib.h>

/*SOLUCION DE LOS PUNTOS 1(longCadena) HASTA 7(AsignarCadena)(sin argumentos de linea de comandos) 
LOS DEMÀS ARCHIVOS C EN LA CARPETA ESTAN SOLUCIONADOS CON ARGUMENTOS DE LINEA DE COMANDO */

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

char *copiarN(char *cadOrigen, char *cadDestino, int n){
	/*Programa que copia los primeros n caracteres de la cadena cadOrigen en la cadena cadODestino*/
	int i;
	for (i=0; i<n;i++){
		cadDestino[i]=cadOrigen[i];
	}
	return cadDestino;
		
}

char *copiarSub(char *cadOrigen, char *cadDestino,int n, int m){
	/*Programa que copia la subcadena dada por los caracteres entre la posición n y m de la cadena cadOrigen en la cadena cadDestino*/
	int i;
	for (int i=0; i<=(m-n);i++){
		cadDestino[i]=cadOrigen[i+n];
	}
	return cadDestino;
	
}

int compararCadenas(char *cad1,char *cad2){
		/*Programa que compara dos cadenas*/
		int i;
		for (i=0;cad1[i]!= '\0';i++){
			if (cad1[i]==cad2[i]){
				return 0;
			}	
			else if (cad1[i]<cad2[i]){
				return -1;
			}	
			else{ 
				return 1;
			}
		}
}	

char *concatenarCadenas(char *cad1, char *cad2){
	int longitudCad1=longCadena(cad1);//4
	int longitudCad2=longCadena(cad2);//5
	char *cad3 =(char *)malloc(longitudCad1+longitudCad2+1);
	int i;
	int j;
	for (i=0;i<longitudCad1;i++){
		cad3[i]=cad1[i];
		for (j=0; j<longitudCad2; j++){
			cad3[j+longitudCad1]=cad2[j];
		}	
	}	
	return cad3;
}	

char *asignarCadena(char *cad, char car){
	int i=0;
	char *cadena=(char*)malloc(longCadena(cad)+1);
	while (cad[i]!='\0'){
		cadena[i]=car;
		i++;
	}	
	return cadena;
}


int main(){
	/*septimo punto*/
	char *cad="abcd";
	char *cadenaC=asignarCadena(cad,'x');
	printf("\n%s\n",cadenaC);
	
	/*sexto punto*/
	char *m="hola";
	char *p="mundo";
	char *r=concatenarCadenas(m,p);
	printf("\n%s\n",r);
	
	
	/*quinto punto*/
	int i=compararCadenas("MNP","mnp");
	if (i==0){
		printf("\nel resultado es = 0\n");
	}
	else if (i==-1){
		printf("\nel resultado es < 0\n");
	}	
	if (i==1){
		printf("\nel resultado es > 0\n");
	}
	
	/*Cuarto punto*/
	int b=3;
	int d=6;
	char *cad2="Holamundo";
	char *cad3=(char*)malloc(d-b+1);
	char *sub=copiarSub(cad2,cad3,b,d);
	printf("\n%s\n",sub);
	
	/*Tercer punto*/
	int w=4;
	char *s1="helloworld";
	char *s2=(char*)malloc(w+1);
	char *copyN=copiarN(s1,s2,w);
	printf("\n%s\n",copyN);


	/*segundo punto*/
	char *cad1="Alejandro Meza";
	char *c=(char*)malloc(longCadena(cad1)+1);
	char *dest=copiarCadenas(cad1,c);
	printf("\n%s\n",dest);
	
	/*primer punto*/
	char *s="Cadena Demo";
	int a;
	a = longCadena(s);
	printf("\nLa longitud de s es %d\n",a);
	return 0;
}

