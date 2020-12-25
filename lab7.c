#include <stdio.h>
#include <string.h>

int length_str(int str)
{
    return (str - 1);
}
void detect_pal(int x, char arr[])
{
    int i, j;
    for (i = 0; i <= x - 1; i++)
    {
        for (j = x - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                printf("String is a palindrome");
                return;
            }
            else
                printf("String is not a palindrome");
            return;
        }
    }
}

int main()
{

    char arr[100];
    int i, x;

    printf("Enter a word : \n");
    fgets(arr, sizeof arr, stdin);

    for (i = 0; i <= 100 && arr[i] != '\0'; i++)
    {

        printf("%c ", arr[i]);
    }
    x = length_str(i);
    detect_pal(x, arr);
    printf("\nAlso string have %d characters.", x);

    return 0;
}
