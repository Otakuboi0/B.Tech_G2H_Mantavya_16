#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter rows and columns of the first matrix ::");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of the second matrix ::");
    scanf("%d%d",&r2,&c2);
    int a[20][20],b[20][c20],c[20][20];
    if (r2 !=c1)
    {
        printf("Multiplication cant be done ");
    }
    else{
        printf("Enter the elements of first ");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the elements of second ");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        /* code */
        for (int j = 0; j < c2; j++)
        {
            /* code */
            c[i][j]=0;
            for (int k = 0; k < c1; k++)
            {
                c[i][j]= c[i][j] + a[i][k]*b[k][j];
            }
            
        }
        
    }
    printf("resultant matrix is ::");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d \t ",c[i][j]);
        }
        printf("\n");
        
    }
    
    
    }
    

    

    
}