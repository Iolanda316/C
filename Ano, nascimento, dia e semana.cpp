#include <stdio.h>

int main(void){
	int nas, ano, idade, mes, sem, dia;
	
	
printf ("Digite seu ano de nascimento: ");
scanf ("%d", &nas);

printf ("Digite o ano atual");
scanf ("%d", &ano);

idade = ano - nas;

printf ("Sua idade e: %d \n", idade);

mes = idade * 12;

printf ("Sua idade em meses e: %d \n", mes);

sem = mes * 4;

printf ("Sua idade em semanas e: %d \n", sem);

dia = sem * 7;

printf ("Sua idade em dias e: %d \n", dia);


}