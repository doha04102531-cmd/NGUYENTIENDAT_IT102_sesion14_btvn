#include <stdio.h>

int sum(int a, int b);
int main(){
	int a=3;
	int b=4;
	printf("Tong cua %d va %d la: %d", a,b,sum(a,b));
	return 0;
}

int sum(int a, int b){
	return a+b;	
}	
