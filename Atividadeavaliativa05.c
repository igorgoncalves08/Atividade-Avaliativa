#include <stdio.h>

int main(){
	
	struct{
		char nome[50], email[50], tel[15];
	}digitos;
	int total1=0, total2=0, total3=0;
	
	printf("Digite um nome: ");
	scanf("%s", digitos.nome);
	
	printf("Digite um email: ");
	scanf("%s", digitos.email);
	
	printf("Digite um telefone: ");
	scanf("%s", digitos.tel);
	
	printf("---------------------------- \n");
	
	while (digitos.nome[total1] != '\0'){
		total1++;
	}
	
	printf("Nome: %d digitos\n", total1);
	
	while(digitos.email[total2] != '\0'){
		total2++;
	}
	
	printf("Email: %d digito\n", total2);
	
	while (digitos.tel[total3] != '\0'){
		total3++;
	}
	
	printf("Telefone: %d digito\n", total3);
	
}
