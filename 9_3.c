/*Nhap du lieu cho ma tran cap n, doc va in ra man hinh*/
#include <stdio.h>
int main()
{
    FILE *fp;
    int i, j, n;
    float value, x[100][100];
    fp = fopen("MATRAN.txt", "w");
    // Nhap va ghi
    printf("Nhap cap do n:");
    scanf("%d", &n);
    fprintf(fp, "%d\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("Nhap dong %d:\n", i);
        for (j = 1; j <= n; j++)
        {
            printf("a[%d][%d]:\n", i, j);
            scanf("%f", &value);
            fprintf(fp, "%f ", value);
        }
        fprintf(fp, "%c", '\n');
    }
    fclose(fp);
    // Doc
    fp = fopen("MATRAN.txt", "r");
    fscanf(fp, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%f ", &x[i][j]);
        }
    }
    fclose(fp);
    // In
    printf("Ma tran cap %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%f ", x[i][j]);
        }
        printf("%c", '\n');
    }
    return 0;
}