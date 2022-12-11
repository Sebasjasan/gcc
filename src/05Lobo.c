#include<stdio.h>

int main(void){

	char characters[4];
	printf("\n[?] Un vigilante, un lobo, caperucita y un racimo de uvas estan a un extremo\nde un rio. Elije en que orden debe el vigilante llevar a cada uno para que \nninguno se coma entre ellos.\n\nVigilante: B\nLobo: L\nCaperusita: C\nUvas: U\n\n");
	for(int i=0; i<=3; i++){
		printf("\n[+] %i en pasar el rio: ", i);
		scanf("%s", &characters[i]);
	}
	if( ((characters[0] == 'L' && characters[1] == 'C') || (characters[1] == 'L' && characters[2] == 'C') || (characters[2] == 'L' && characters[3] == 'C')) || ((characters[0] == 'C' && characters[1] == 'U') || (characters[1] == 'C' && characters[2] == 'U') || (characters[2] == 'C' && characters[3] == 'U')) ){
		printf("\n[!] Perdiste\n");
	}
	else{
		printf("\n[+] Ganaste\n");
	}
}