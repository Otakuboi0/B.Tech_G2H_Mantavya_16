#include <stdio.h>
int main(){
    char a ;
    printf("Enter a character");
    scanf("%c",&a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("Ëntered charcter is an alpahabet");
    }
    else{
        printf("Entered one is a special character");
    }
    return 0;

}