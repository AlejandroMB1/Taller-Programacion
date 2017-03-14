#include <stdio.h>

int Ackerman(int m, int n){
	if(m==0){
		return n+1;
	}
	else if(n==0 && m>0){
		return Ackerman(m-1, 1);
	}
	else{
		return Ackerman(m-1, Ackerman(m, n-1));
	}
}

void main( ){
	int m, n,a;	
	m=1;
	n=3;
	a=Ackerman(m,n);
	printf("\nAckerman de (%d,%d) = %d\n",m,n,a);
	
}