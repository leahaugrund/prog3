#include <stdio.h>

int main(int argc, char *argv[]){
	
	char eingabe;
	char ausgabe;
	char aus[]="abcdefghijklmnopqrstuvwxyz";
	char wird[]="irjmnzltacogdeksvbphxqyuwf";
	int counter = 30;
	int i;
	
	if(*argv[0] == 'e'){
		while( scanf("%c", &eingabe) != EOF){
			for( i = 0; i < 26; i++ ){
				if( aus[i] == eingabe){
					counter = i;
				}
			}
			if( counter != 30){
				ausgabe = wird[counter];
			}
			
			printf("%c", ausgabe);
			counter = 30;
		}
	}
	
	if(*argv[0] == 'd'){
		while( scanf("%c", &eingabe) != EOF){
			for( i = 0; i < 26; i++ ){
				if( wird[i] == eingabe){
					counter = i;
				}
			}
			if( counter != 30){
				ausgabe = aus[counter];
			}
			
			printf("%c", ausgabe);
			counter = 30;
		}
	}
	
	
	
	
	
	return 0;
}


