#include<stdio.h>
#include<math.h>
    float f(float x){
        float y;
        y = x*x -5*x -6;
        return y;
    }


int main()
{
    float f (float x);
    float a, b, akar, n,a2, b2;
    printf("Masukkan Range batas atas (a) : ");
    scanf("%f", &a);
    printf("Masukkan Range batas bawah(b): ");
    scanf("%f", &b);

    if(f(a)*f(b)<0)
    {
        float x[100];
        x[0] = a;
        printf("Berapa banyak bagian Range: ");
        scanf("%f", &n);
        float h = (b-a)/n;
        printf("------------------------------------------------------\n");
        printf("| Iterasi |    Xi   |    Xi+1   |  f(xi)  |  f(xi+1) |\n");
        printf("------------------------------------------------------\n");
            for(int i=0 ; i<n ; i++){
                x[i+1] = x[i] + h;
                printf("|    %d    | %7.2f |  %7.2f  | %7.2f | %7.2f  |\n", i+1, x[i], x[i+1], f(x[i]), f(x[i+1]));
                if (f(x[i])*f(x[i+1])<0){
                    a2 = x[i];
                    b2 = x[i+1];

                    if(abs(f(x[i])) < (abs(f(x[i+1]))))
                        akar = x[i];
                    else
                        akar = x[i+1];
                }
            }

                printf("Akar  mendekati nilai %f dalam range %f dan %f\n", akar, a2, b2);
    }
    else
        printf("Tidak ada akar dalam range %f hingga %f", a, b);
}
