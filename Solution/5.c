#include <stdio.h>
int main()
{
    int choice;
    printf("Select An Area\n");
    printf("1 Circle\n");
    printf("2 Square\n");
    printf("3 Sector\n");
    printf("4 Ellipse\n");
    printf("5 Triangle\n");
    printf("Enter choice here:\n");
    scanf("%d", &choice);
   
    if (choice == 1)
    {
        float r;
        printf("Enter Radius");
        scanf("%f", &r);

        printf("%.2f", 3.1416 * r * r);
    }
    else if (choice == 2)

    {

        float s;
        printf("Enter Side");
        scanf("%f", &s);
         
        printf("%.2f",  s * s);
    }
    else if (choice == 3)

    {
        float rad, angle;
        printf("Enter Radius & Angle:");
        
        scanf("%f %f", &rad,&angle);
        printf("%.2f", 0.5 * (rad * rad) * angle);
    }
    else if (choice == 4)
    {
        float x, y;
        printf("Enter X & Y:");
        
        scanf("%f %f", &x, &y);
        printf("%.2f", 3.1416 * x * y);
        }
    else if (choice == 5)

    {
        float base, height;
        printf("Enter Base & Height:");
        
        scanf("%f %f", &base, &height);
        printf("%.2f", .5 * base * height);
    }
    else{
        printf("invalid");}
}