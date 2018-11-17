#include<stdio.h>
int main()
{
    int choose = 0, n, i;
    unsigned long long factorial = 1;

   while (choose !=3){
   factorial = 1;

   printf("Type number to choose \n 1. factorial \n 2. double factorial \n 3.Exit\n  Choice: ");
   scanf("%d", &choose);

   switch(choose){

   case(1):
      printf("Enter an integer: ");
      scanf("%d",&n);

      if (n > 0){
        for(i=1; i<=n; ++i)
        {
            factorial *= i;  //n! = n*(n-1)...
        }
      }
      else if( n = 0){
        factorial = 1; //0!=1;
      }
      else  // show error if the user enters a negative integer
      {
        printf("Error! Factorial of a negative number doesn't exist.");
      }
      printf(" %d!= %llu\n", n, factorial);

      break;

   case(2):
      printf("Enter an integer: ");
      scanf("%d",&n);

      if (n > 0){
        for(i=n; i>=1; i-=2)
        {
            factorial *= i;  //n! = n*(n-1)...
        }
      }
      else if( n = 0){
        factorial = 1; //0!=1;
      }
      else  // show error if the user enters a negative integer
      {
        printf("Error! Double Factorial of a negative number doesn't exist.");
      }
      printf(" %d!!= %llu\n", n, factorial);

      break;

   case(3):
       printf("Good bye!\n");

      break;

   default:
       printf("Invalid number, please choose again.");
   }

}
   return 0;
}
