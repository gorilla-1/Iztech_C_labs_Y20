#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void patter_butterfly(int n) 
{

    int i, j; //top part
    for (i = 0; i <= n / 2; i++)
    {
        for (j = 0; j <= n; j++) //triangle logic
        {
            if (i < j)
                printf(" ");
            else
                printf("2");
            if (i <= (n)-j)
                printf(" ");
            else
                printf("1");
        }
        printf("\n");
    }
    for (i = 0; i <= n / 2; i++) //bottom part
    {
        for (j = 0; j <= n; j++)
        {
            if (i > (1 + (n / 2) - j))
                printf(" ");
            else
                printf("3");
            if (j < n / 2 + i)
                printf(" ");
            else
                printf("4");
        }
        printf("\n");
    }
}
int main(void)
{
    int i, j, x, choice, n, arr[30];
    time_t t;
    printf("Write '1' for user defined size\nWrite '2' for random size\n:  ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Write the size. It should be 5<n<51 and even number: ");
        scanf("%d", &n);
        if ((5 < n || n < 51) && n % 2 == 0)
        {
            clock_t begin_func = clock();
            patter_butterfly(n);
            clock_t finish_func = clock();
            printf("Execution time of the function: %f ms", (double)(finish_func - begin_func) / CLOCKS_PER_SEC);
        }
        else if (n < 5 || 51 < n)
        {
            printf("Size should be 5<n<51");
            break;
        }
        else if (n % 2 != 0)
        {
            printf("The size should be an even number");
            break;
        }

        break;

    case 2:
        for (i = 0; i < 23; i++)
        {
            arr[i] = 2 * (i + 3);
        }
        srand((unsigned)time(&t));
        x = rand() % 24;
        n = arr[x];
        printf("Random Size: %d\n", n);
        clock_t begin_func = clock();
        patter_butterfly(n);
        clock_t finish_func = clock();
        printf("Execution time of the function: %f ms", (double)(finish_func - begin_func) / CLOCKS_PER_SEC);

        break;

    default:
        printf("Erroneous number!");
        break;
    }
}
