#include <stdio.h>
#include <string.h>
//Mert Korkmaz
int main()
{
    char month[12][5];
    float x[12];
    int i, j;
    for (i = 0; i <= 11; i++)
    {
        printf("Enter the month name and rainfall amount: ");
        scanf("%s[^\n]", month[i]);
        scanf("%f", &x[i]);
    }
    for (i = 0; i <= 11; i++)
    {
        printf("%s\t\t", month[i]);
        printf("\n");
        for (j = 0; j < x[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
