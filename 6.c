#include <stdio.h>
int main()
{
    int score;

    printf("Enter score( 0-100 ): ");
    scanf("%d", &score);

    switch (score)
    {

    case 80 ... 100:
        printf("Grade: A");
        break;

    case 60 ... 79:
        printf("Grade: B");
        break;

    case 50 ... 59:
        printf("Grade: C");
        break;

    case 40 ... 49:
        printf("Grade: D");
        break;

    case 0 ... 39:
        printf("Grade: F");
        break;
    }

    return 0;
}
