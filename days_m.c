#include <stdio.h>;
int main(){
    int days;
    printf("Enter the days to be calculated \n");
    scanf("%d",&days);
    int y,ld;
    int m;
    y= days/365;
    m = days/30;
    ld = (days%365)%30;

    printf("year is %d \n",y);
    printf("month is %d \n",m);
    
    printf("REMAINIG DAYS is %d",ld);

        return 0 ;
    
}