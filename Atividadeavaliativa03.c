#include <stdio.h>

int main(){
	
	int d, m, a, passo1, passo2, passo3;
	
	printf("Informe o dia de nascimento: ");
	scanf("%d", &d);
	
	printf("Informe o mês de nascimento: ");
	scanf("%d", &m);
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &a);
	
	passo1 = ( d*100 + m) + a;
	
	passo2 = (passo1 / 100) + (passo1 % 100);
	
	passo3 = passo2 % 5;
	
	if(d%5==0)
    printf("PERFIL TIMIDO");
    else
    if(d%5==1)
    printf("PERFIL SONHADOR");
    else
    if(d%5==2)
    printf("PERFIL PAQUERADOR");
    else
    if(d%5==3)
    printf("PERFIL ATRAENTE");
    else
    if(d%5==4)
    printf("PERFIL IRRESISTIVEL");
    
}
