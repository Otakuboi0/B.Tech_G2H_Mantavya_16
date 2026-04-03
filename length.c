#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("Enter the string ::");
    gets(s);
    int n =strlen(s);
    printf("%d is the length of the string",n);
}