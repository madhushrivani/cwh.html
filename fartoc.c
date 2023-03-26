#include <stdio.h>

int main()
{
    float farh, cels;
    printf("Enter the temp in farenhiet : ");
    scanf("%f", &farh);
    cels= 5.0/9*(farh-32);
    printf("temperature in celecius = %f", cels);
    return 0;
}
