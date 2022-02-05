// result system
#include <stdio.h>
#include <math.h>

int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f", &marks);

    if (marks >= 80 && marks <= 100)
        printf("A+");
    else if (marks >= 75)
        printf("A");

    else if (marks >= 70)
        printf("A-");

    else if (marks >= 65)
        printf("B+");

    else if (marks >= 60)
        printf("B");
    else if (marks >= 55)
        printf("c+");
    else if (marks >= 50)
        printf("C");
    else if (marks >= 40)
        printf("D");
    else if (marks < 40 && marks > 0)
        printf("F");

    else
        printf("Invalid input");
}
