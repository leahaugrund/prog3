#include <stdio.h>
#include <string.h>

void schriebbit (unsigned z){
	int i;
	for ( i = 16+1; i >= 0; i--){
		printf("%d", (z & 1<<i) != 0);
	}
}
unsigned liesbit(){
	
	char s1[17];
	int i, y;
	int x = 1, erg = 0;
	
	scanf("%s", s1);
	
	for( i = strlen(s1)-1; i >= 0; i--){
		if( s1[i] == '1'){
			erg += x;
		} 	
		x *= 2;
	}	
	return erg;
}
int main(void){
	unsigned a, b, erg;
	
	printf("Zahl 1 : ");
	a = liesbit();
	
	printf("Zahl 2 : ");
	b = liesbit();
	
	
	printf("\n a & b = ");
	
	erg = a & b; 
	
	schriebbit(erg);
	
	printf("\n a | b = ");
	
	erg = a | b; 
	
	schriebbit(erg);
	
	printf("\n a ^ b = ");
	
	erg = a ^ b; 
	
	schriebbit(erg);
	
	return 0;
}
