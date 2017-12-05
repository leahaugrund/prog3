#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct Knoten{
	void * nutzdaten;
	struct Knoten *next;
	struct Knoten *prev;
} Knoten;

typedef struct Knoten *nodep;

nodep neuerKnoten(void){
	nodep p;
	
	p = malloc(sizeof(Knoten));
	assert(p);
	p->next = NULL;
	p->prev = NULL;
	
	return p;
}

void printList (nodep lst){
	
	nodep aktKnoten = lst;
	
	while (aktKnoten != NULL && aktKnoten->next != NULL){
		printf("\n%p", aktKnoten->nutzdaten);
		aktKnoten = aktKnoten->next;
	}
	aktKnoten = aktKnoten->next;
}

nodep insertAt (nodep lst, int pos, void *data){
	
	nodep neu = neuerKnoten();
	nodep akt = lst;
	int i;
	
	strcpy(neu->nutzdaten, data);
	
	if( pos == -1){
		while( akt->next != NULL){
			akt = akt->next;
		}
		neu->prev = akt;
		akt->next = neu;
	}else{
		for (i = 0; i < pos; i++){
			if(akt == NULL){
				printf("nicht vorhandene Position");
				break;
			}
			akt = akt->next;
		}
		neu->next = akt;
		neu->prev = akt->prev;
		if(akt->prev != NULL){
			akt->prev->next = neu;
		}
		akt->prev = neu;
	}
	
	
	return lst;	
	
}
	
int main(int argc, char *argv[]){

	nodep lst = NULL;
	lst = insertAt(lst,0,"1");
	printList(lst);
	free(lst);
	
	return 0;
}
