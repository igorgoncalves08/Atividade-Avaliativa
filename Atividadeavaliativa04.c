#include <stdio.h>

int main(){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("\n %d", &n);
	
	
	while(n >= 0){
		printf("%d \n", n);
		
		n--;
	}
}
