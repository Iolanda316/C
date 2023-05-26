#include <stdio.h>



int main(void){
	
	int ano, idade;
	
	printf ("Digite o ano de nascimento");
	scanf ("%d", &ano);
	
	idade = 2023 - ano;
	
	if (idade >= 18){
		printf ("\n Voce tem idade para votar");
	}
	else{
		
		if(idade <= 18)
		printf("\n Voce nao tem idade para votar");
	}
	
	
	
}