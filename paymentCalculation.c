// This code calculates a monthly payment

#include <stdio.h>
#include <math.h>

int main(void)
{
    int purchasePrice;
    int downPayment;
    int financeTerm;
    float interestRate;
    double monthlyPayment;
    
    // declaring variables 
    
    printf("Enter the purchase price P: ");
    scanf("%d", &purchasePrice);
    
    printf("Enter the amount of down payment D: ");
    scanf("%d", &downPayment);
    
    printf("Enter the finance term (in months): ");
    scanf("%d", &financeTerm);
    
    printf("Enter the monthly interest rate (in percent): ");
    scanf("%f", &interestRate);
    
    // scanning user inputs
    
    int P = purchasePrice; 
    int D = downPayment;
    int n = financeTerm;
    float r = interestRate;
    double M = monthlyPayment;
    
    // re-assigning the variables
    
    r = r/100;
    M =((P-D)*r*powf((1+r),n))/(powf((1+r),n)-1);
    
    // calculating the monthly payment

    printf("\nThe monthly payment is: %.2lf\n", M);
    
    // final statement
    
	return 0;
}