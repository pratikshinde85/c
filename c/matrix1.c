#include<stdio.h>
#include<conio.h>
int main()
{   int i,j,r,c;
    int a[100][100];
    int b[100][100];
    int add[100][100],sub[100][100],mul[100][100];
    printf("Enter the Rows and Columns that you want:");
    scanf("%d%d",&r,&c);
    printf("Enter the Element in Matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   printf("Display the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        b[j][i]=a[i][j];
        }
    }
    printf("Transpose of the Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of Transpose and Given Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        add[i][j]=a[i][j]+b[i][j];
        printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
     printf("Substraction of Transpose and Given Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        sub[i][j]=a[i][j]-b[i][j];
        printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of Transpose and Given Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        mul[i][j]=a[i][j]*b[i][j];
        printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}