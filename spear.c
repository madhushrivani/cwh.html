#include <stdio.h>
#include <conio.h>

void main()
{
    int r;
    float pi= 3.14 , AOS;
    printf("Enter the radius : ");
    scanf("%d", &r);
    AOS = 4*pi*r*r;
    printf("Area of the Sphere is %f", AOS);
    getch ();
}
