#include<stdio.h>
#include<math.h>

float f(float x)
{
    float y;
    y = x*x -5*x -6;
    return y;
}
float f2(float x)
    {
        float y;
        y = 2*x -5;
        return y;
    }
int main()
{

    printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("                        PROGRAM MENCARI AKAR DENGAN METODE NEWTON RAPHSON\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");

    int n, i=-1, iterasi = -1;
    float x[10];

    printf("Inputkan posisi x yang diketahui : ");
    scanf("%f", &x[0]);
    printf("Masukkan batasan koordinat : ");
    scanf("%d", &n);

    printf("-----------------------------------------------------------------------\n");
    printf("| Iterasi  |   x[i]    |     f(x[i])     |    f'(x[i])    |   x[i+1]  |\n");
    printf("-----------------------------------------------------------------------\n");

    for(i = 0 ; i< n ; i++)
    {
        iterasi++;

        x[i+1] = x[i] - (f(x[i])/f2(x[i]));
        printf("|    %d     |   %5.2f   |      %5.2f      |      %5.2f     |   %5.2f   |\n",iterasi, x[i], f(x[i]), f2(x[i]), x[i+1]);

        if(fabs(f(x[i+1])) < 0.01)
            break;
    }
    printf("\nAkar = %f\n", x[i+1]);
}
