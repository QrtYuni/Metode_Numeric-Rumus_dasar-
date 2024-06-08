
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
    float a, b, c, i = 1;
    printf("Masukkan Range batas atas (a) : ");
    scanf("%f", &a);
    printf("Masukkan Range batas bawah(b): ");
    scanf("%f", &b);
    printf("------------------------------------------------------------------------------------------------\n");
    printf("| Iterasi |     a      |       b      |      c     |     f(a)    |     f(b)     |     f(c)     |\n");
    printf("------------------------------------------------------------------------------------------------\n");

    if( f(a) * f(b) < 0 )
    {
        while(fabs(f(c)) > 0.1)
        {
            printf("|    %0.f    | %10.6f |  %10.6f  | %10.6f | %10.6f  |  %10.6f  |  %10.6f  |\n" , i, a, b, c, f(a), f(b), f(c));
            i++;
            c = ((f(a)*b)-(f(b)*a)) / (f(a) - f(b));
            if(f(a)*f(c) < 0)
                b = c;
            else
                a = c;
        }
        printf("Akar mendekati = %f\n", c);

}
}
