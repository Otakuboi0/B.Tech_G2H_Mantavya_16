#include <stdio.h>

int main(){
    float a, b;
    int c;
    float ad, sub, mul, div;

    printf("Enter what to do- \n1.Add \n2.Sub \n3.Multiply \n4.Divide \n");
    scanf("%d", &c);

    if (c < 1 || c > 4)
    {
        printf("Invalid choice");
    }
    else{
        printf("Enter the values of a and b: ");
        scanf("%f %f", &a, &b);

        if (c == 1)
        {
            ad = a + b;
            printf("Result = %f", ad);
        }
        else if (c == 2)
        {
            sub = a - b;
            printf("Result = %f", sub);
        }
        else if (c == 3)
        {
            mul = a * b;
            printf("Result = %f", mul);
        }
        else
        {
            div = a / b;
            printf("Result = %f", div);
        }
    }

    return 0;
}
