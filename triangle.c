#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter three sides of  triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if ((s1+s2)<s3 || (s2+s3)<s1 || (s3+s1)<s1 )
    {
        printf("Inavlid-Triangle cant be created");
    }
    if (s1==0 || s2==0 || s3==0)
    {
        printf("Sides are not valid");
    }
    else{
        if (s1==s2 && s2==s3)
        {
            printf("Equilateral trinagle");
        }
        else if (s1==s2 || s2==s3 )
        {
            printf("Isosceles Triangle");
        }
        else{
            printf("Saclene");
        }
        
        
    }
    return 0;
    
}