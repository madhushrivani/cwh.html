#include <stdio.h>

void main()
{
    int r;
    float pi= 3.14 , AOC;
    printf("Enter the radius : ");
    scanf("%d", &r);
    AOC = pi*r*r;
    printf("Area of the circle is %f", AOC);
    getch ();
}
