#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k, n, r, l;
    float a[10][10], m[10][10], b[10], x[10], s, maks ;

    printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("                                    MEMULAI PROGRAM METODE GAUSS PIVOTING : \n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");

    printf("Inputkan banyaknya persamaan : ");
    scanf("%d", &n);

    //LOOPING 1 -> Menginputkan persamaan
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
    //Mencetak hasil input persamaan dalam bentuk matriks
    printf("\nNilai konstanta persamaan dalam matriks adalah :\n");
    for (i = 1 ; i<=n ; i++)
    {
        for (j=1 ; j<=n ; j++)
            printf("%10.4f ", a[i][j]);
        printf("= %10.4f\n", b[i]);
    }

    //LOOPING 2 -> Membuat nol kolom k awal  dibawah diagonal utama
    printf("\nEliminasi Gauss :\n");
        for(k=1 ; k<n ; k++)
        {
            for (i=k+1 ; i<=n ; i++)
            {
                r = k;
                maks = abs(a[k][k]);

                for (l=k+1 ; l<=n ; ++l)
                {
                    if (abs(a[l][k]) > maks)
                    {
                        r = l;
                        maks = a[l][k];
                    }
                }
                for (j = k ; j<= n ; j++)
                {
                    s = a[k][j];
                    a[k][j] = a[r][j];
                    a[r][j] = s;
                }
                    s = b[k];
                    b[k] = b[r];
                    b[r] = s;

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
    for(i=n ; i>=1 ; i--)
    {
        s = 0;
        for (j=i+1 ; j<=n ; j++)
            s += a[i][j]*x[j];
        x[i] = (b[i] - s)/a[i][i];

    }

    //LOOPING 4 -> Print hasil akhir
        for(i=1 ; i<=n ; i++)
            printf("Hasil untuk nilai X%d adalah : %.4f\n", i, x[i]);
}
