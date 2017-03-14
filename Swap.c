#include <stdio.h>
#include <stdlib.h>

/* swap.c */

void swap(int *a,int *b){
	int temp = *a; //8
	*a = *b;
	*b = temp;

}
void main(int argc, char *argv[]){
	int x = atoi(argv[1]); //8
	int y = atoi(argv[2]); //10
	swap(&x,&y);
	printf("\n%d:%d\n",x,y);//10,8
}
