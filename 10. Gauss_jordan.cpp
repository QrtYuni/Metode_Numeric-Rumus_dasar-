#include<stdio.h>
int main()
{
    int i, j, k, n, s;
    float a[10][10], m[10][10], b[10], x[10];

    printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("                                   MEMULAI PROGRAM METODE GAUSS JORDAN: ");
    printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("Inputkan banyaknya persamaan : ");
    scanf("%d", &n);

    //LOOPING 1
    for (i=1 ; i<=n ; i++)
    {
        for (j = 1 ; j<=n ; j++)
        {
            printf("Masukan nilai untuk persamaan %d untuk i = %d: ", i, j);
            scanf("%f", &a[i][j]);
        }
        printf("Masukan nilai untuk hasil persamaan %d : ", i);
        scanf("%f", &b[i]);
    }
    printf("\nNilai konstanta persamaan dalam matriks adalah :\n");
    for (i = 1 ; i<=n ; i++)
    {
        for (j=1 ; j<=n ; j++)
            printf("%10.4f ", a[i][j]);
        printf("= %10.4f\n", b[i]);
    }

    //LOOPING 2 membuat nol kolom k awal  dibawah diagonal utama
    printf("\nGauss Jordan:\n");
        for(k=1 ; k<=n ; k++)
        {
            for (i=1 ; i<=n ; i++)
            {
                if(i==k)
                    continue;
                m[i][k] = a[i][k]/a[k][k];
                for (j=k ; j<=n ; j++)
                {
                    a[i][j] -= m[i][k]*a[k][j];
                }
                b[i] -= m[i][k]*b[k];
            }
            for (i = 1 ; i<=n ; i++)
            {
                for (j=1 ; j<=n ; j++)
                    printf("%10.4f ", a[i][j]);
                printf("= %10.4f\n", b[i]);
            }
            printf("\n");
        }


    //LOOPING 3
        for(i=1 ; i<=n ; i++)
            printf("Hasil untuk nilai X%d adalah : %10.4f\n", i, b[i]/a[i][i]);
}
