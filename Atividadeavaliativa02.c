#include <stdio.h>

int main(){
	
	int i, n, t1 = 1, t2 = 1, proxtermo;
	
	printf("Informe a quantidade de termos: ");
	scanf("%i", &n);
	
	printf("\n Serie de Fibonacci \n");
	
	for(i = 1; i<= n; i++){
		
		printf("%i, ", t1);	
	proxtermo = t1 + t2;
	t1 = t2;
	t2 = proxtermo;
}

return 0;

}
