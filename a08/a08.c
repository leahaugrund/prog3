#include <stdio.h>

int main(void){
	
	int i = 0, j, maxIndex = 0, maxZahl = 0, aktZahl,alteZahl;
	int zahlen[21];
	
	while( scanf("%d", &zahlen[i]) != EOF){
		i++;
	}
	
		
	for( j = 0; j <20; j++){
		for( i = j; i < 20; i++){
			aktZahl = zahlen[i];
			if( aktZahl > maxZahl){
				maxZahl = aktZahl;
				maxIndex = i;
			}
		}
		alteZahl = zahlen[j];
		zahlen[j]= maxZahl;	
		zahlen[maxIndex] = alteZahl;
	}
	
	for( i = 0; i < 20; i ++) {
			printf("%d\n", &zahlen[i]); 
	}
	
	
	
	
	return 0;
}
