#include <stdio.h>
#include <math.h>
int main(){
    int n , bin[32];
    int i =0;
    printf("Enter n ::");
    scanf("%d",&n);

    while (n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;

    }
    int count = i;

    for (int i = count-1 ; i >=0; i--)
    {
        printf("%d",bin[i]);
    }
    return 0;
    

}