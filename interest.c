#include <stdio.h>
#include <math.h>
int main(void)
{
    double selection,r1,r2,a,a1,principal,r,k,n;
/* defining variables */
    printf("What would you like to calculate? 1.Amount 2.Principal 3. Number of months 4.Interest Rate. Select either 1,2,3,4\n");
    scanf("%lf", &selection);
/* asking user to choose what they would like calculated */
    if ( selection == 1)
    {
        /* asking user to input values required for calculation */
         printf("You have chosen to calculate the amount\n");
         printf("Please enter Principal\n");
         scanf("%lf", &principal);
         printf("Please enter Number of Months\n");
         scanf("%lf", &n);
         printf("Please enter Interest Rate Per Month  \n");
         scanf("%lf", &r);
         /* Calculating and printing required value */
         a =  pow((1 + (r/1200)),12 * n);
         a1 = a * principal ;
         printf("Amount = %lf\n", a1);
    }
 if ( selection == 2)
    {
        /* asking user to input values required for calculation */
        printf("You have chosen to calculate the principal \n");
        printf("Please enter Amount\n");
        scanf("%lf", &a);
        printf("Please enter Number of Months\n");
        scanf("%lf", &n);
        printf("Please enter Interest Rate Per Month \n ");
        scanf("%lf", &r);
         /* Calculating and printing required value */
        a1 =  pow((1 + (r/1200)),12 * n);
        principal = a / a1;
        printf("Amount = %lf\n", principal);

    }
     if (selection == 3)
    {
        /* asking user to input values required for calculation */
        printf("You have chosen to calculate the Number of Months\n");
        printf("Please enter Amount\n");
        scanf("%lf", &a);
        printf("Please enter the principal\n");
        scanf("%lf", &principal);
        /* Calculating and printing required value */
        printf("Please enter interest rate per month \n");
        scanf("%lf", &r);
        n =  (log(a/principal) / log(1+(r/1200))) / 12;

        printf("Amount of Months = approx. %f\n", n);
    }
     if (selection == 4)
    {
        /* asking user to input values required for calculation */
        printf("You have chosen to calculate the interest rate per month\n");
        printf("Please enter Amount\n");
        scanf("%lf", &a);
        printf("Please enter the principal\n");
        scanf("%lf", &principal);
        printf("Please enter number of months \n ");
        scanf("%lf", &n);
        /* Calculating and printing required value */
        r1 = a * (1/principal) ;
        r2 = pow(r1,(1/n));
        r = (r2 - 1) * 100;
        printf("Amount = %lf\n", r);
    }

}
