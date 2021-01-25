// This code calculates total charges for rental
// 1 Free day per 4 Days

#include <stdio.h>

int main()

{
    int rentalPeriod;
    double dailyRate;
    double rentalPeriodToPay;
    double charge;
    
    // declaring variables
    
    printf("Enter the daily rate: ");
    scanf("%lf", &dailyRate);

    printf("Enter the rental period (in days) :");
    scanf("%d", &rentalPeriod);

    // scanning user inputs for each variable
    
    printf("Your total free day(s) in this rental is: %d\n", rentalPeriod/4);

    rentalPeriodToPay = rentalPeriod-(rentalPeriod/4);
    
    // calculating total rental period to pay

    const double taxRate = 1.13;
    
    double c = charge;
    c = dailyRate*taxRate*rentalPeriodToPay;
    
    // calculating the total charge

    printf("The total charge including taxes is: %.2lf\n", c);

    return 0;
}