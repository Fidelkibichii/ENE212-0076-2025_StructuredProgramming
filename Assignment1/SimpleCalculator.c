#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1, num2, result;
   char sign;

   printf("Enter first number: ");
   scanf("%lf", &num1);

   printf("Enter a sign(+, -, *, /): ");
   scanf(" %c", &sign);

   printf("Enter second number: ");
   scanf("%lf", &num2);

   switch(sign)
   {
       case '+':
           result = num1 + num2;
           printf("Result = %.2lf\n", result);
           break;

       case '-':
           result = num1 - num2;
           printf("Result = %.2lf\n", result);
           break;

       case '*':
           result = num1 * num2;
           printf("Result = %.2lf\n", result);
           break;

       case '/':
           if(num2 != 0)
           {
               result = num1 / num2;
               printf("Result = %.2lf\n", result);

           }
           else
           {
               printf("Error: Cannot divide by zero.\n");
           }
           break;

       default:
           printf("Error: Invalid Sign.\n");
   }

    return 0;
}
