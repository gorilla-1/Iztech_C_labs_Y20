#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//Mert Korkmaz
double power(int base,int exp){
	
	return(pow(base,exp));
	
}
int main() {
	int base,exp,answ;
	printf("Function : Given power of a given integer\n\n");
	
	printf("Enter base: ");
	scanf("%d",&base);
	
	printf("Enter exponent: ");
	scanf("%d",&exp);
	
	answ= power(base,exp);
	
	printf("The result of power(%d,%d)is : %d",base,exp,answ);
			
	
	
	return 0;
}
