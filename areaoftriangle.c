#include <stdio.h>

void main()
{
    int b,h,AOT;
    printf("Enter the base of the triangle : ");
    scanf("%d", &b);
    printf("Enter the height of the triangle : ");
    scanf("%d", &h);
    AOT = 1/2 *(b*h);
    printf("Area of the triangle is %d", AOT);
    getch ();
}
