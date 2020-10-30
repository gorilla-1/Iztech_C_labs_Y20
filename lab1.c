#include <stdio.h>
#include <stdlib.h>
/*Mert Korkmaz*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float x,y,k,l,m,n;
	printf("======LAB01=====\n");
	printf("Write down your x and y values\n X: ");
	scanf("%f",&x);
	printf("Y: ");
	scanf("%f",&y);
	
	if(x+y<=0){
		k=x*x+y;
	}
	else{
		k=x-y;
	}
	printf("%f= K\n",k);
/*we found k value*/
	if(0<x+y && x+y<=10){
		l=(x+y)/(x*y+1);
		
	}
	else if(x+y>10){
		l=y+(1/3);
	}
	printf("%f= L\n",l);
	/*now found the value of l*/
	if(x==y){
		m=7*x+5;	
	}
	else{
		m=3*y+6;
	}
	printf("%f= M\n",m);
	/*value of m been found*/
	
	if(k<l&&l<m){
		printf("M is the bigger one %f",m);
	}
	else if(l<k&&m<k){
		printf("K is the bigger one %f",k);
	}
	else if(k<l&&m<l){
		printf("L is the bigger one %f",l);
	}
	
	
	return 0;
}
