#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Mert Korkmaz
double summ(int base,int exp)
{
	int i=1;
	double sumx;
	sumx=0;
	while(i<=exp){
		
		
		sumx = sumx + pow(base,i);
		i++;
	
	}
	return sumx;
//I made it with for loop but didn't give the expected outputs.	

}

int main() {
	int base,exp,answ;
	printf("Write your base : ");
	scanf("%d",&base);
	
	printf("Write your exponent : ");
	scanf("%d",&exp);
	answ = summ(base,exp);
	printf("The result of sum(%d,%d) is: %d",base,exp,answ);
	
	return 0;
}
