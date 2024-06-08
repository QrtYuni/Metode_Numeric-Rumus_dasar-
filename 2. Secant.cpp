#include<stdio.h>
#include<math.h>
float f(float x)
{
    float y;
    y = x*x -5*x - 6;
    return y;
}

int main()
{
    float a, b, c, iterasi = 1;
    printf("Masukkan besar batas awal : ");
    scanf("%f", &a);
    printf("Masukkan besar batas akhir : ");
    scanf("%f", &b);
    printf("------------------------------------------------------------------------------------------------\n");
    printf("| Iterasi |     a      |       b      |      c     |     f(a)    |     f(b)     |     f(c)     |\n");
    printf("------------------------------------------------------------------------------------------------\n");

    c =  ((b * f(a)) - (a * f(b)))/(f(a) - f(b));
    while((fabs (f(c)) > 0.1))
    {
        printf("|    %0.f    | %10.6f |  %10.6f  | %10.6f | %10.6f  |  %10.6f  |  %10.6f  |\n", iterasi, a, b, c, f(a), f(b), f(c));
        iterasi = iterasi+1;
        c =  ((b * f(a)) - (a * f(b)))/(f(a) - f(b));
        if(f(a) * f(c) <= 0.1)
            b = c;
        else
            a = c;
    }
     printf("|    %0.f    | %10.6f |  %10.6f  | %10.6f | %10.6f  |  %10.6f  |  %10.6f  |\n", iterasi, a, b, c, f(a), f(b), f(c));
    printf("Nilai akar adalah : %f\n", c);

}
