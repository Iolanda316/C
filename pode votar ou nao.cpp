#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int nas, idade;
	
	printf ("Digite o ano de nascimento: ");
	scanf ("%d", &nas);
	
	idade = 2023-nas;
	if (idade > 16)
	
	printf ("Voce pode votar!", idade, "anos");
	
	else
	
	printf ("Voce nao pode votar!", idade, "anos");
}