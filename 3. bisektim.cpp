#include<stdio.h>
#include<math.h>

float f(float x)
{
    float y;
    y = x*x -5*x -6;
    return y;
}

int main()
{
    float a, b, c,i=0;
    printf("Masukkan range nilai awal : ");
    scanf("%f", &a);
    printf("Masukkan range nilai akhir : ");
    scanf("%f", &b);
    printf("------------------------------------------------------------------------------------------------\n");
    printf("| Iterasi |     a      |       b      |      c     |     f(a)    |     f(b)     |     f(c)     |\n");
    printf("------------------------------------------------------------------------------------------------\n");

    if((f(a) * f(b)) < 0)
    {
        c = (b+a)/2;
        while(fabs(f(c)) > 0.9)
        {
            printf("|    %0.f    | %10.6f |  %10.6f  | %10.6f | %10.6f  |  %10.6f  |  %10.6f  |\n", i+1, a, b, c, f(a), f(b), f(c));
            i++;
            if (f(a)*f(c) < 0)
                b=c;
            else
                a=c;
            c = (b+a)/2;
        }
        printf("|    %0.f    | %10.6f |  %10.6f  | %10.6f | %10.6f  |  %10.6f  |  %10.6f  |\n", i+1, a, b, c, f(a), f(b), f(c));
        printf("Nilai akar mendekati : %f", c);
    }
    else
        printf("Tidak ada akar dalam range tersebut.");
}
