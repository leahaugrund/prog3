#include <stdio.h>

double betr(double x){
	if(x<0){
		return (x*(-1));
	}else{
		return x;
	}
}

int main(void){
	double x;
	double w1;
	double w2;
	
	scanf("%lf",&x);
	
	w2=(1+x)/2;
	
	do{
		w1 = w2;
		w2 = (w1+(x/w1))/2;
	
	} while((betr(w1-w2))>=(1e-7));
		
	
		
	printf("%010.4f\n",w2);
	printf("%10.4f\n",w2);
	return 0;
}
