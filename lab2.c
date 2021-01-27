#include <stdio.h>
#include <math.h>
//Mert Korkmaz  Lab02
int main()
{

    float a, b, c;
    float x, y;
    float delta;

    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    

    delta = pow(b, 2)-(4*a*c);

    x = (-b+sqrt(delta))/(2*a);
    y = (-b-sqrt(delta))/(2*a);


    printf("\nx1 : %.3f", x);
    printf("\nx2 : %.3f\n", y);

    if  (delta < 0){
        printf("There are no real roots.");
        printf("Discriminant is = %1.f",delta);
    }
    else if (delta == 0){
        printf("There are two real, identical roots.");
        printf("Discriminant is = %1.f",delta); 
    }
    else if (delta > 0){
        printf("There are two real roots.\n");
        printf("Discriminant is = %1.f",delta);
    }
return 0;
}
