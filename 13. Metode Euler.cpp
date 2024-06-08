#include<stdio.h>

float f(float x, float y)
{
    float a;
    a = -y;
    return a;
}

int main()
{
    int iterasi = 0;
    float n, x, y, h, xn;

    printf("Inputkan nilai X awal : ");
    scanf("%f", &x);
    printf("Inputkan nilai Y awal : ");
    scanf("%f", &y);
    printf("Inputkan nilai pengali looping : ");
    scanf("%f", &h);
    printf("Inputkan nilai x yang diketahui : ");
    scanf("%f", &xn);

    printf("\nNilai x-y : \n");
    printf("----------------------------\n");
    printf("| iterasi  |   X   |   Y   |\n");
    printf("----------------------------\n");

while (x <= xn)
    {
    printf("|   %3.d    | %5.3f | %5.3f |\n", iterasi, x, y);

    n = h * f(x, y);
    y = y + n;
    x = x + h ;

    iterasi++;
    }
    printf("|   %3.d    | %5.3f | %5.3f |\n", iterasi, x, y);
}
