#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d",&a," is the largest");
    }
    
    else if (b>a && b>c)
    {
        printf("%d",&a,"is the largest");
    }
    
    else{
        printf("%d",&c," is the largest");
    }
    return 0;
}
