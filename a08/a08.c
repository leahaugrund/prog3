#include <stdio.h>

int main(void){
	
	int i = 0, j = 0, k = 0, minIndex = 0, minZahl = 0, aktZahl,alteZahl;
	int zahlen[21];
	
	while( scanf("%d", &zahlen[i]) != EOF){
		i++;
	}
	
	
	
	minZahl = zahlen[k];
	for( k = 0; k < i; k++){
		aktZahl = zahlen[k];
		if( aktZahl < minZahl ){
			minZahl = aktZahl;
			minIndex = k;
		}
	}
	alteZahl = zahlen[0];
	zahlen[minIndex] = alteZahl;
	zahlen[0] = minZahl;

		
	for( j = 0; j < i; j ++) {
		printf("%d\n", zahlen[j]); 
	}
	
	return 0;
}
