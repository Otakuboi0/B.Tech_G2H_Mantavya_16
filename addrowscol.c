#include <stdio.h>
#include <conio.h>
int main(){
    int ar[3][3];
    int i, j ,n;
    printf("Enter the elemtns")
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < =3; i++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    int row[r],col[m]
    for ( i = 0; i < 3; i++)
    {
        int rowsum=0;
        rowsum += ar[0][i];
        row[i]=rowsum;
    }
    for ( i = 0; i < 3; i++)
    {
        int colsum = 0;
        colsum += ar[i][0];
        col[i]=colsum;
    }
    printf("rows um i s::")
    for(i=0;i<3,i++)
    {
        printf(" %d ", row[i]);
    }
    printf("CFol sum i s")
    for ( i = 0; i < 3; i++)
    {
        printf("%d",col[i]);
    }
    
    return 0;
    
    
    

}