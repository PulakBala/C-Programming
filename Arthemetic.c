// // // // #include<stdio.h>

// // // // int main()
// // // // {
// // // //     int num1 , num2 ,sum;
// // // //     printf("Enter two numbers:\n");
// // // //     scanf("%d %d",&num1,&num2);

// // // //     sum = num1 + num2;
// // // //     printf("The sum is = %d\n",sum);

// // // //     return 0;
// // // // } 

// // // #include<stdio.h>
// // // int main()
// // // {

// // //     int num1,num2,num3,sum;
// // //     float averg;
// // //     printf("Enter any 3 numbers : ");
// // //     scanf("%d %d %d",&num1,&num2,&num3);
    
// // //     sum =num1+num2+num3;
// // //     printf("sum is = %d\n",sum);

// // //     averg = (float)sum/3;
// // //     printf("averg man is = %f\n",averg);

// // //     return 0;
// // // }
 

// //  #include<stdio.h>
// //  int main()
// // {
// //     int num1,num2,num3,result;

// //     printf("Enter three numbers: ");
// //     scanf("%d %d %d",&num1,&num2,&num3);
    
// //     result = num1 + num2 + num3;
// //     printf("sum = %d\n",result);
    
// //     result = num1 - num2 - num3;
// //     printf("sub = %d\n",result);
    

// //     result = num1 * num2 * num3;
// //     printf("mul = %d\n",result);
    
// //     result = num1 / num2 / num3;
// //     printf(" Div = %d\n",result);
    
// //     result = num1 % num2 %  num3;
// //     printf("Remainder = %d\n",result);
    
// //     return 0;
// // }

// #include<stdio.h>
// int main()
// {
//     int num1,num2,sum;
//     printf("Enter two numbers : ");
//     scanf("%d %d\n",&num1,&num2);

//     sum = num1 + num2;
//     printf("sum = %d\n",sum);
    
//     return 0;
// }  

#include<stdio.h>
int main()
{
    int num1, num2,num3,sum;
    float avg;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    avg = (float)sum/3;
    printf(" %d ", sum);
    printf("Average = %.2f\n",avg);


    return 0;
}