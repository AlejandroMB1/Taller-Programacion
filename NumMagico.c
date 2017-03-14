#include <stdio.h>
#include <stdlib.h>

/*Numero magico*/
int main(){
	int Magico1 = rand() % 101;
	int Magico2 = rand() % 101;
	int num;
	int i;
	for (i=0;i<10;i++){
		printf("\nIngresa un numero: ");
		scanf("%d",&num);
		if (num==Magico1 || num==Magico2){
			printf("\nAcertaste!!\n");
		}	
		else {
			printf("\nMala suerte,intentalo de nuevo\n");
		}
 	}
	return 0;
}