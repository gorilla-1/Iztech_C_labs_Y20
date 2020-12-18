#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Mert Korkmaz
int main(void)
{

    int temp, j, n = 16, i = 0, x, decimal = 0;
    char c, arr[20];
    int to_binary, binary[50];
    printf("Enter a hexadecimal number\n");
    fgets(arr, sizeof arr, stdin);
    j = strlen(arr) - 1;
    printf("hexLength = %d\n", j);
    while (arr[i] != '\0')
    {
        if (arr[i] > '@')
            c = arr[i] - '7';
        else
            c = arr[i] - '0';
        if (c < 0)
            break;
        x = c * pow(n, j - 1);
        decimal += x;
        j--;
        i++;
    }
    to_binary = decimal;

    for (i = 0; to_binary > 0; i++)
    {
        binary[i] = to_binary % 2;
        to_binary = to_binary / 2;
    }

    printf("Decimal equivalent = %d\n", decimal);
    printf("Binary equivalent = ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);
}
