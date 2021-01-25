//Finding two number m and n that multiplies to an inputnumber and adds up to a queryNumber
// important: m and n are factors of the inputnumber

#include <stdio.h>

void getPairDivisor (int inputNumber, int queryNumber, int* mAddress, int* pAddress){
// A function that finds factors of the "inputNumber" that adds up to "queryNumber"

    for (int i = 1; i <= inputNumber; i++) {
        if (inputNumber % i == 0 && ((inputNumber/i + i) == queryNumber)){
// if inputnumber divided by i has a remainder of 0, then i is a factor
// inputnumber/i (a facotr) + i should be the queryNumber

            *pAddress = i;
            *mAddress = inputNumber/i ;
            // i is saved as address "p"
            // inputNumber/i is saved as address "m"
        }
    }
}

int main ()
{
    int inputNumber, queryNumber, m = 0, p = 0;
    printf("Please enter an input number n: ");
    scanf("%d", &inputNumber);
    printf("Please enter a query number q: ");
    scanf("%d", &queryNumber);
// scanning user inputs 
    getPairDivisor(inputNumber, queryNumber, &m, &p); 
    // &m and &p because we are getting the numbers from the saved address
    if (p == 0){
        printf("The program could not find any pair divisors for these inputs\n");
        // if p=o, it means m=o as well -> therefore no pair divisors
        } else { 
            printf("m = %d, p = %d, m*p = %d, and m+p = %d", m, p, m*p, m+p);
        }
    
    return 0;
}