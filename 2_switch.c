#include <stdio.h>

void main()

{

    int a, b, c;

    printf("3 numbers");

    scanf("%d%d%d", &a, &b, &c);

    switch (a > b)

    {

    case 0:

    {

        switch (b > c)

        {

        case 0:
            printf("%d", c);

            break;

        case 1:
            printf("%d", b);

            break;
        }

        break;
    }

    case 1:

    {

        switch (a > c)

        {

        case 0:
            printf("%d", c);

            break;

        case 1:
            printf("%d", a);

            break;
        }

        break;
    }
    }
}