#include <stdio.h>

// prototyping 
double owed_amount(double interest_rate, double previously_owed, double purchase_amount, double monthly_payment)
    {
        double amount_due;
        amount_due = previously_owed + purchase_amount + ((purchase_amount+previously_owed)*interest_rate) - monthly_payment;

        if(amount_due < 0){
            amount_due = 0;

// if the amount due by the end of the month is a negative, the amount due is 0 because the credit card owner doesn't owe any money
        } return amount_due;
    }

int main(void)

{
    double previously_owed, purchase_amount, monthly_payment, interest_rate, months, total_purchase_value, total_interest;
// Declaring variables
    printf("Enter amount already owed on card: ");
    scanf("%lf", &previously_owed);

    printf("Enter purchase amount per month: ");
    scanf("%lf", &purchase_amount);

    printf("Enter payment amount per month: ");
    scanf("%lf", &monthly_payment);

    printf("Enter yearly interest rate as percent: ");
    scanf("%lf", &interest_rate);

    printf("Enter number of months to consider: ");
    scanf("%lf", &months);

    total_purchase_value = previously_owed + purchase_amount * months;
    printf("Total purchased value: %.2lf\n", total_purchase_value);
// Printing and scanning basic statements and user inputs
    interest_rate = interest_rate / 100;
    interest_rate = interest_rate / 12;
// since the interest rate that the user input is in yearly, and in percent,
// it needs to be divided by 100 and 12 (12 months in one year)
    for(int i = 1; i <= months; i++) // for loop - it loops from month #1 to month #user input
    {
    if ((previously_owed == 0) && (purchase_amount == monthly_payment))
    {
        total_interest = 0; // if there is no balance from previous month, and monthly payment = purchase amount, there is no interest

    } else if ((previously_owed == 0) && (purchase_amount > monthly_payment))
    {
        total_interest += purchase_amount*interest_rate;
       previously_owed = owed_amount(interest_rate, previously_owed, purchase_amount, monthly_payment);

    } else if (previously_owed != 0)
    {
        total_interest += (purchase_amount+previously_owed)*interest_rate;
        previously_owed = owed_amount(interest_rate, previously_owed, purchase_amount, monthly_payment);
    }
}
    printf("Total interest charges: %.2lf\n", total_interest);

    return 0;
}