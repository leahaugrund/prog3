#include <stdio.h>

int main(void){
	int zahl;
	int rest;
	char ausg;
	int i;
	printf("arabische Zahl: \n");
	scanf("%d",&zahl);
	printf("neorömische Zahl: \n");
	
	ausg = 'C';
	rest = zahl%100;
	zahl = zahl/100;
	for(i=0; i < zahl; i++){
		printf("%c",ausg);
	}
	zahl = rest;
	
	ausg = 'L';
	rest = zahl%50;
	zahl = zahl/50;
	for(i=0; i < zahl; i++){
		printf("%c",ausg);
	}
	zahl = rest;
	
	ausg = 'X';
	rest = zahl%10;
	zahl = zahl/10;
	for(i=0; i < zahl; i++){
		printf("%c",ausg);
	}
	zahl = rest;
	
	ausg = 'V';
	rest = zahl%5;
	zahl = zahl/5;
	for(i=0; i < zahl; i++){
		printf("%c",ausg);
	}
	zahl = rest;
	
	ausg = 'I';
	rest = zahl%1;
	zahl = zahl/1;
	for(i=0; i < zahl; i++){
		printf("%c",ausg);
	}
	zahl = rest;
	
	if(zahl!=0){
		printf("Fehler");
	}	
	printf("\n");
	return 0;
}
