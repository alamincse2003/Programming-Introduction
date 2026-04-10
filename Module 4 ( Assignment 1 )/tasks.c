#include<stdio.h>

// problem 5 
int main ()
{
    int n;
    scanf("%d", &n);
    if (n>1000){
        printf("I will buy Punjabi\n");
        n = n - 1000;
        if (n>=500)
        {
             printf("I will buy new shoes\n");
             printf("Alisa will buy new shoes\n");
        }
        
    }
    else{
         printf("Bad luck!\n");
    }
    
}

//  if (n>1000){
//         printf("I will buy Punjabi\n");
//         n = n - 1000;
//         if (n>=500)
//         {
//              printf("I will buy new shoes\n");
//              printf("Alisa will buy new shoes\n");
//         }
        
//     }
//     else{
//          printf("Bad luck!\n");
//     }
// problem 4
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//     if(i%3==0 && i%7==0)
//     {
//         printf("%d\n",i );
//     }
   
//     }
    
  
    
// }
// problem 3
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if(n%3==0){
//         printf("YES");
//     }
//     else{
//           printf("NO");
//     }
// }
// problem 2
// int main()
// {
//     int a;
//     int b;
//     scanf("%d %d", &a, &b);
//     int muliply = a * b;
//     printf("%d",muliply);

// }

// problem 1
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
// }