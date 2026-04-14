#include<stdio.h>

int main()
{   
    int x = 0;
    if (x == 1)
    {
       if (x == 0)
       {
       printf("inside if if\n");
       }
       else{
         printf("inside if else\n");
       }
    }
    else{
        printf("inside else\n");
    }
    return 0;
}
 
// int main()

// {   
//     int x;
//     scanf("%d", &x);
//     if (x%2!=0)
//     {
//        printf("Odd");
//     }
//     else{
//         printf("Even");
//     }
//     if (x>0)
//     {
//          printf("Positive");
//     }
//     else{
//         printf("Negative");
//     }
    
//     return 0;
// }

// int main()
// {    int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
   
//     if (a > b && b > c)
//     {
//         printf("%d",a);
//     }
//     else if (b > a && c > b)
//     {
//          printf("%d",b);
//     }
//      else  
//     {
//          printf("%d",c);
//     }
//     return 0;
// }