#include <stdio.h>


int main (void) {
	
	int v, vel;
	
	printf ("Digite a velocidade");
	scanf ("%d", &v);
	if (v>80) {
		
		
		vel = (v-80)*5;
		printf ("Voce foi multado, sua multa e de %d\n", vel);
	}
	
		else {
			printf ("\n Voce nao foi multado");
		}
}