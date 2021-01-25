// Finding a volume of the cylinder using integral, specifically trapazoid method
// Volume = cross-sectional area x length
// This code finds a TOTAL cross-sectional area for each dx (height) using trapazoid method
// Once total areas are found through "TrapazoidalInegral" function, it multiplies to length in the "main" function

#include <stdio.h>
#include <math.h>

double ellipseFunction(double a, double b, double y){
    double x = (a*sqrt(pow(b,2)-pow(y,2)))/b;
    return x;
    // a function that draws the cross-sectional area
}

void trapezoidalIntegral(int n, double depth, double width, double height, double length, double* integralResult){
    double a = width/2; 
    double b = height/2;
    double delta = height/n;
    double initialBound = height/(-2);
    double finalBound = (height/(-2)) + depth;
    // declaring variables for the void function
    
    // Finding total area at each "i" using for-loop

    double i; // i is double because i is i+delta and delta is decimal value

    for (i= initialBound + delta; i<=finalBound-delta; i=i+delta){
        *integralResult += 2*ellipseFunction(a, b, i);
        // only the half the area of the tank (because of squareroot) -> multiply by the two
    }
    *integralResult += ellipseFunction(a, b, initialBound) + ellipseFunction(a, b, finalBound);
    *integralResult = *integralResult * delta; 

//according to trepazoid method you divide everything by 2 but since thats only the half the area of the tank, we multiply by 2 again
}

int main(void){

double width, height, length, specificDepth, volume, integralResult;
int const n = 10000; // n is given as 10,000

printf("Enter the width of the tank (in meters): ");
scanf("%lf", &width);
printf("Enter the height of the tank (in meters): ");
scanf("%lf", &height);
printf("Enter the length of the tank (in meters): ");
scanf("%lf", &length);
printf("Enter the specific depth on the measuring stick (in centimeters): ");
scanf("%lf", &specificDepth);

specificDepth = specificDepth/100;
// converting specificDepth's unit into "m" from "cm"

trapezoidalIntegral(n, specificDepth, width, height, length, &integralResult);
volume = integralResult*length;
// calling the fuction and multiplying the integralResult, which is the total area with length

printf("Depth %.2lf cm : Volume %.2lf cubic meters", specificDepth*100, volume);
// final print statement, changing specific depth into "cm" again and printing volume
// multiplying the volume by 0.999 to compensate the error
return 0;
}
