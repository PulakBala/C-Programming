#include <stdio.h>

int main() 
{
    int num1;
    float  num2;
    double num3;
    printf("Enter an integer and float  and double number : ");
    scanf("%d %f %lf ",&num1 , &num2 ,&num3 );
    printf("Numbers: %d,%.1f,%.2lf\n",num1,num2,num3);

    return 0;
     
}