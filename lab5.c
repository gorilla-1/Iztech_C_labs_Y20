#include<stdio.h>
#include<math.h>


#define pi 3.14159


double factorial(int x){

   if (x==0)
   return 1;
   else
      
    return (x*factorial(x-1));
}

float taylor_sin(float rad,float precision){
    float sum,difference;
    int i=0;
    sum=0;
    do{
        sum += pow(-1,i)*pow(rad,((2*i)+1))/factorial((2*i)+1);
        difference= pow(-1,i)*pow(rad,((2*i)+1))/factorial((2*i)+1);
        i++;
        difference -= pow(-1,i)*pow(rad,((2*i)+1))/factorial((2*i)+1);
    }while(fabs(difference)>=precision);
    
return sum;
    
}

float taylor_cos(float rad,float precision){
    float difference , sum=0 ;
    int i=0;
        do{
        sum+=pow(-1,i)*pow(rad,2*i)/factorial(2*i);
        difference = pow(-1,i)*pow(rad,2*i)/factorial(2*i);
        i++;
        difference -= pow(-1,i)*pow(rad,2*i)/factorial(2*i);
    }
    while(fabs(difference)>=precision);
return sum;
}
            
int main(){

    printf("==========\nWelcome to Taylor Series Calculator\n==========");
    
    int j,x,degree=30;
    float radian, precision,cosx,sinx;
    printf("\n Please write how precise it should be: ");
    scanf("%f",&precision);
    
    for(j=0;j<=12;j++){
        x=degree*j;
        radian= (x*pi/180);
    
        
        cosx = taylor_cos( radian,precision);

        sinx = taylor_sin( radian,precision);
        

   printf("\ncos = %.4f ||| sin = %.4f for x=%d degrees or %.4f radians",cosx ,sinx,x,radian);

    } 
return 0;
}
