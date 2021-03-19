// // //#include <stdio.h>

// // //int main()
// // //{
// //     //char lower;
// //     //printf("Enter any lowercase vlue : ");
// //     //scanf("%c",&lower);
// //     //printf("The uppercase vlue = %c\n",lower-32);


// //   //  return 0;
// // //} 


// // #include <stdio.h>
 
// //  int main()
// //  {

// //      char upper;
// //      printf("Enter any uppercase ascii : ");
// //      scanf("%c",&upper);
// //      printf("The lowercse ascii = %c\n",upper+32);

// //      return 0;
// //  }

// #include <stdio.h>
// int main ()
// {

//     char  lower ,upper;
//     printf("Enter any lowercase latter : ");
//     scanf("%c",&lower);

//     upper = toupper (lower);
//     printf("Uppercase letter = %c\n",upper);
    
//     return 0;

// }  
#include <stdio.h>

int main()
{

    char upper,lower;
    printf("Enter any uppercase :");
    scanf("%c",&upper);

    lower = tolower (upper);
    printf("Lowercase letter = %c\n",lower);

    return 0;
}