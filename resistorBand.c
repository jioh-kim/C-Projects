#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char resistor1_band1, resistor1_band2, resistor1_multiplier, resistor1_tolerance;
    double value_resistor1_band1, value_resistor1_band2, value_resistor1_multiplier, value_resistor1_tolerance;
    
// define variables for resistor 1 and their values

    printf("Please enter the 1st band of resistor 1:\n");
    scanf(" %c", &resistor1_band1);
    
    printf("Please enter the 2nd band of resistor 1:\n");
    scanf(" %c", &resistor1_band2);
    
    printf("Please enter the multiplier band of resistor 1:\n");
    scanf(" %c", &resistor1_multiplier);
    
    printf("Please enter the tolerance band of resistor 1:\n");
    scanf(" %c", &resistor1_tolerance);
    
// -------------------------------------------------------
    
    char resistor2_band1, resistor2_band2, resistor2_multiplier, resistor2_tolerance;
    double value_resistor2_band1, value_resistor2_band2, value_resistor2_multiplier, value_resistor2_tolerance;

// Defining variables for resistor 2 and their values

    printf("Please enter the 1st band of resistor 2:\n");
    scanf(" %c", &resistor2_band1);
    
    printf("Please enter the 2nd band of resistor 2:\n");
    scanf(" %c", &resistor2_band2);
    
    printf("Please enter the multiplier band of resistor 2:\n");
    scanf(" %c", &resistor2_multiplier);
    
    printf("Please enter the tolerance band of resistor 2:\n");
    scanf(" %c", &resistor2_tolerance);
    
//-------------------------------------------------------------

    printf("\nColour bands for resistor 1: \n");

    if (resistor1_band1 == 'K' || resistor1_band1 == 'k') {
        printf("Black ");
        value_resistor1_band1 = 0;
    } else if (resistor1_band1 == 'B' || resistor1_band1 == 'b') {
        printf("Brown ");
        value_resistor1_band1 = 1;
    } else if (resistor1_band1 == 'R' || resistor1_band1 == 'r') {
        printf("Red ");
        value_resistor1_band1 = 2;
    } else if (resistor1_band1 == 'O' || resistor1_band1 == 'o') {
        printf("Orange ");
        value_resistor1_band1 = 3;
    } else if (resistor1_band1 == 'E' || resistor1_band1 == 'e') {
        printf("Yellow ");
        value_resistor1_band1 = 4;
    } else if (resistor1_band1 == 'G' || resistor1_band1 == 'g') {
        printf("Green ");
        value_resistor1_band1 = 5;
    } else if (resistor1_band1 == 'U' || resistor1_band1 == 'u') {
        printf("Blue ");
        value_resistor1_band1 = 6;
    } else if (resistor1_band1 == 'V' || resistor1_band1 == 'v') {
        printf("Violet ");
        value_resistor1_band1 = 7;
    } else if (resistor1_band1 == 'Y' || resistor1_band1 == 'y') {
        printf("Grey ");
        value_resistor1_band1 = 8;
    } else if (resistor1_band1 == 'W' || resistor1_band1 == 'w') {
        printf("White ");
        value_resistor1_band1 = 9;
    } else {
        printf("\nInvalid colour for the 1st band of resistor 1. Exiting the program...\n");
    exit(0);
    }


    if (resistor1_band2 == 'K' || resistor1_band2 == 'k') {
        printf("Black ");
        value_resistor1_band2 = 0;
    } else if (resistor1_band2 == 'B' || resistor1_band2 == 'b') {
        printf("Brown ");
        value_resistor1_band2 = 1;
    } else if (resistor1_band2 == 'R' || resistor1_band2 == 'r') {
        printf("Red ");
        value_resistor1_band2 = 2;
    } else if (resistor1_band2 == 'O' || resistor1_band2 == 'o') {
        printf("Orange ");
        value_resistor1_band2 = 3;
    } else if (resistor1_band2 == 'E' || resistor1_band2 == 'e') {
        printf("Yellow ");
        value_resistor1_band2 = 4;
    } else if (resistor1_band2 == 'G' || resistor1_band2 == 'g') {
        printf("Green ");
        value_resistor1_band2 = 5;
    } else if (resistor1_band2 == 'U' || resistor1_band2 == 'u') {
        printf("Blue ");
        value_resistor1_band2 = 6;
    } else if (resistor1_band2 == 'V' || resistor1_band2 == 'v') {
        printf("Violet ");
        value_resistor1_band2 = 7;
    } else if (resistor1_band2 == 'Y' || resistor1_band2 == 'y') {
        printf("Grey ");
        value_resistor1_band2 = 8;
    } else if (resistor1_band2 == 'W' || resistor1_band2 == 'w') {
        printf("White ");
        value_resistor1_band2 = 9;
    } else {
        printf("\nInvalid colour for the 2nd band of resistor 1. Exiting the program...\n");
    exit(0);
    }

    if (resistor1_multiplier == 'K' || resistor1_multiplier == 'k') {
        printf("Black ");
        value_resistor1_multiplier = 1;
    } else if (resistor1_multiplier == 'B' || resistor1_multiplier == 'b') {
        printf("Brown ");
        value_resistor1_multiplier = 10;
    } else if (resistor1_multiplier == 'R' || resistor1_multiplier == 'r') {
        printf("Red ");
        value_resistor1_multiplier = 100;
    } else if (resistor1_multiplier == 'O' || resistor1_multiplier == 'o') {
        printf("Orange ");
        value_resistor1_multiplier = 1000;
    } else if (resistor1_multiplier == 'E' || resistor1_multiplier == 'e') {
        printf("Yellow ");
        value_resistor1_multiplier = 10000;
    } else if (resistor1_multiplier == 'G' || resistor1_multiplier == 'g') {
        printf("Green ");
        value_resistor1_multiplier = 100000;
    } else if (resistor1_multiplier == 'U' || resistor1_multiplier == 'u') {
        printf("Blue ");
        value_resistor1_multiplier = 1000000;
    } else if (resistor1_multiplier == 'V' || resistor1_multiplier == 'v') {
        printf("Violet ");
        value_resistor1_multiplier = 10000000;
    } else if (resistor1_multiplier == 'L' || resistor1_multiplier == 'l') {
        printf("Gold ");
        value_resistor1_multiplier = 0.1;
    } else if (resistor1_multiplier == 'S' || resistor1_multiplier == 's') {
        printf("Silver "); 
        value_resistor1_multiplier = 0.01;
    } else {
        printf("\nInvalid colour for the multiplier band of resistor 1. Exiting the program...\n");
    exit(0);
    }

    if (resistor1_tolerance == 'B' || resistor1_tolerance == 'b') {
        printf("Brown ");
        value_resistor1_tolerance = 1;
    } else if (resistor1_tolerance == 'R' || resistor1_tolerance == 'r') {
        printf("Red ");
        value_resistor1_tolerance = 2;
    } else if (resistor1_tolerance == 'G' || resistor1_tolerance == 'g') {
        printf("Green ");
        value_resistor1_tolerance = 0.5;
    } else if (resistor1_tolerance == 'U' || resistor1_tolerance == 'u') {
        printf("Blue ");
        value_resistor1_tolerance = 0.25;
    } else if (resistor1_tolerance == 'V' || resistor1_tolerance == 'v') {
        printf("Violet ");
        value_resistor1_tolerance = 0.10;
    } else if (resistor1_tolerance == 'Y' || resistor1_tolerance == 'y') {
        printf("Grey ");
        value_resistor1_tolerance = 0.05;
    } else if (resistor1_tolerance == 'L' || resistor1_tolerance == 'l') {
        printf("Gold ");
        value_resistor1_tolerance = 5;
    } else if (resistor1_tolerance == 'S' || resistor1_tolerance == 's')  {
        printf("Silver "); 
        value_resistor1_tolerance = 10;
    } else {
        printf("\nInvalid colour for the tolerance band of resistor 1. Exiting the program...\n");
    exit(0);
    }
    
// printing the colours using if-else
// at the same time, it sets value for band 1, band 2, multiplier, and tolerance for resistor 1
// when wrong input is done, it ptints an  error statement
        
    printf("\nColour bands for resistor 2: \n");

    if (resistor2_band1 == 'K' || resistor2_band1 == 'k') {
        printf("Black ");
        value_resistor2_band1 = 0;
    } else if (resistor2_band1 == 'B' || resistor2_band1 == 'b') {
        printf("Brown ");
        value_resistor2_band1 = 1;
    } else if (resistor2_band1 == 'R' || resistor2_band1 == 'r') {
        printf("Red ");
        value_resistor2_band1 = 2;
    } else if (resistor2_band1 == 'O' || resistor2_band1 == 'o') {
        printf("Orange ");
        value_resistor2_band1 = 3;
    } else if (resistor2_band1 == 'E' || resistor2_band1 == 'e') {
        printf("Yellow ");
        value_resistor2_band1 = 4;
    } else if (resistor2_band1 == 'G' || resistor2_band1 == 'g') {
        printf("Green ");
        value_resistor2_band1 = 5;
    } else if (resistor2_band1 == 'U' || resistor2_band1 == 'u') {
        printf("Blue ");
        value_resistor2_band1 = 6;
    } else if (resistor2_band1 == 'V' || resistor2_band1 == 'v') {
        printf("Violet ");
        value_resistor2_band1 = 7;
    } else if (resistor2_band1 == 'Y' || resistor2_band1 == 'y') {
        printf("Grey ");
        value_resistor2_band1 = 8;
    } else if (resistor2_band1 == 'W' || resistor2_band1 == 'w') {
        printf("White ");
        value_resistor2_band1 = 9;
    } else {
        printf("\nInvalid colour for the 1st band of resistor 2. Exiting the program...\n");
    exit(0);
    }
        
    if (resistor2_band2 == 'K' || resistor2_band2 == 'k') {
        printf("Black ");
        value_resistor2_band2 = 0;
    } else if (resistor2_band2 == 'B' || resistor2_band2 == 'b') {
        printf("Brown ");
        value_resistor2_band2 = 1;
    } else if (resistor2_band2 == 'R' || resistor2_band2 == 'r') {
        printf("Red ");
        value_resistor2_band2 = 2;
    } else if (resistor2_band2 == 'O' || resistor2_band2 == 'o') {
        printf("Orange ");
        value_resistor2_band2 = 3;
    } else if (resistor2_band2 == 'E' || resistor2_band2 == 'e') {
        printf("Yellow ");
        value_resistor2_band2 = 4;
    } else if (resistor2_band2 == 'G' || resistor2_band2 == 'g') {
        printf("Green ");
        value_resistor2_band2 = 5;
    } else if (resistor2_band2 == 'U' || resistor2_band2 == 'u') {
        printf("Blue ");
        value_resistor2_band2 = 6;
    } else if (resistor2_band2 == 'V' || resistor2_band2 == 'v') {
        printf("Violet ");
    value_resistor2_band2 = 7;
    } else if (resistor2_band2 == 'Y' || resistor2_band2 == 'y') {
        printf("Grey ");
        value_resistor2_band2 = 8;
    } else if (resistor2_band2 == 'W' || resistor2_band2 == 'w') {
        printf("White ");
        value_resistor2_band2 = 9;
    } else {
        printf("\nInvalid colour for the 2nd band of resistor 2. Exiting the program...\n");
    exit(0);
    }
        
    if (resistor2_multiplier == 'K' || resistor2_multiplier == 'k') {
        printf("Black ");
        value_resistor2_multiplier = 1;
    } else if (resistor2_multiplier == 'B' || resistor2_multiplier == 'b') {
        printf("Brown ");
        value_resistor2_multiplier = 10;
    } else if (resistor2_multiplier == 'R' || resistor2_multiplier == 'r') {
        printf("Red ");
        value_resistor2_multiplier = 100;
    } else if (resistor2_multiplier == 'O' || resistor2_multiplier == 'o') {
        printf("Orange ");
        value_resistor2_multiplier = 1000;
    } else if (resistor2_multiplier == 'E' || resistor2_multiplier == 'e') {
        printf("Yellow ");
        value_resistor2_multiplier = 10000;
    } else if (resistor2_multiplier == 'G' || resistor2_multiplier == 'g') {
        printf("Green ");
        value_resistor2_multiplier = 100000;
    } else if (resistor2_multiplier == 'U' || resistor2_multiplier == 'u') {
        printf("Blue ");
        value_resistor2_multiplier = 1000000;
    } else if (resistor2_multiplier == 'V' || resistor2_multiplier == 'v') {
        printf("Violet ");
        value_resistor2_multiplier = 10000000;
    } else if (resistor2_multiplier == 'L' || resistor2_multiplier == 'l') {
        printf("Gold ");
        value_resistor2_multiplier = 0.1;
    } else if (resistor2_multiplier == 'S' || resistor2_multiplier == 's') {
        printf("Silver "); 
        value_resistor2_multiplier = 0.01;
    } else {
        printf("\nInvalid colour for the multiplier band of resistor 2. Exiting the program...\n");
    exit(0);
    }
        
  
    if (resistor2_tolerance == 'B' || resistor2_tolerance == 'b') {
        printf("Brown ");
        value_resistor2_tolerance = 1;
    } else if (resistor2_tolerance == 'R' || resistor2_tolerance == 'r') {
        printf("Red ");
        value_resistor2_tolerance = 2;
    } else if (resistor2_tolerance == 'G' || resistor2_tolerance == 'g') {
        printf("Green ");
        value_resistor2_tolerance = 0.5;
    } else if (resistor2_tolerance == 'U' || resistor2_tolerance == 'u') {
        printf("Blue ");
        value_resistor2_tolerance = 0.25;
    } else if (resistor2_tolerance == 'V' || resistor2_tolerance == 'v') {
        printf("Violet ");
        value_resistor2_tolerance = 0.1;
    } else if (resistor2_tolerance == 'Y' || resistor2_tolerance == 'y') {
        printf("Grey ");
        value_resistor2_tolerance = 0.05;
    } else if (resistor2_tolerance == 'L' || resistor2_tolerance == 'l') {
        printf("Gold ");
        value_resistor2_tolerance = 5;
    } else if (resistor2_tolerance == 'S' || resistor2_tolerance == 's')  {
        printf("Silver "); 
        value_resistor2_tolerance = 10;
    } else {
        printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...\n");
    exit(0);
    }
    
// printing the colours using if-else
// at the same time, it sets value for band 1, band 2, multiplier, and tolerance for resistor 1
// when wrong input is done, it ptints an  error statement
    
    printf("\nValue in ohms of resistor 1:\n");
    
    double  ohms_resistor1 = (value_resistor1_band1*10+value_resistor1_band2)*value_resistor1_multiplier;

// calculating the value for resistance of resistor 1

    if (ohms_resistor1 >= 1000000){
        printf("%.2lf MOhms", ohms_resistor1/1000000);
    } else if (ohms_resistor1 >= 1000){
        printf("%.2lf KOhms", ohms_resistor1/1000);
    } else {
        printf("%.2lf Ohms", ohms_resistor1);
    }
    
// these lines define the specific units for ohms

    printf(" +/- %.2lf%%", value_resistor1_tolerance);
    
//-------------------------------------------------------------------
    
    printf("\nValue in ohms of resistor 2:\n");
    double  ohms_resistor2 = (value_resistor2_band1*10+value_resistor2_band2)*value_resistor2_multiplier;
    
// calculating the value of resistance of resistor 1

    if (ohms_resistor2 >= 1000000){
        printf("%.2lf MOhms", ohms_resistor2/1000000);
    } else if (ohms_resistor2 >= 1000){
        printf("%.2lf KOhms", ohms_resistor2/1000);
    } else {
        printf("%.2lf Ohms", ohms_resistor2);
    }
    
// these lines define the specific units of ohms
    
    printf(" +/- %.2lf%%\n", value_resistor2_tolerance);
    
//------------------------------------------------------------
    
    printf("\nThe Equivalent in series is ");
    double equivalent_series = ohms_resistor1 + ohms_resistor2;
    
// calculating the equivalent series 
// The following lines define unit

    if (equivalent_series >= 1000000){
        printf("%.2lf MOhms", equivalent_series/1000000);
    } else if (equivalent_series >= 1000){
        printf("%.2lf KOhms", equivalent_series/1000);
    } else {
        printf("%.2lf Ohms\n", equivalent_series);
    }
    
// calculating the equivalent parallel 
// The following lines define unit
    
    printf("\nThe Equivalent in parallel is ");
    double equivalent_parallel = (ohms_resistor1*ohms_resistor2)/(ohms_resistor1 + ohms_resistor2);
    
    if (equivalent_parallel >= 1000000){
        printf("%.2lf MOhms", equivalent_parallel/1000000);
    } else if (equivalent_parallel >= 1000){
        printf("%.2lf KOhms", equivalent_parallel/1000);
    } else {
        printf("%.2lf Ohms\n", equivalent_parallel);
    }

//-----------------------------------------------------
    
	return 0;
}