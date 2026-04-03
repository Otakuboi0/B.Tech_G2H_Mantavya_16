#include <stdio.h>
int main(){
    int r, c ;
    printf("Enter the order of matrix::");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int sum =0;
    printf("Enter the elements")
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",a[i][j]);
        }
        
    }
    for (int i = 0; i< r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            if (i == j)
            {
                sum+=a[i][j];
            }
            else{
                continue;
            }
            
        }
        
    }
    printf("Sum of diagonal elemts is :: %d",&sum);
    
    

}