#include <stdio.h>

int main()
{int n,row,col,i=2;
    printf("Enter Number:");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        i = 2;

        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                if (row == 1 || row == n)
                {
                    if (((n % 2) == 0 && col <= (n / 2)) || ((n % 2) != 0 && col <= (n / 2) + 1))
                    {
                        printf("%d", col);
                    }
                    else
                    {
                        printf("%d", col - i);
                        i += 2;
                    }
                }
                else
                    printf("1");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
}


    return 0;
}