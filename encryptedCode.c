// This code decrypts an encrypted 4 digits combination

#include <stdio.h>
#include <math.h>

int main(void)

{
	int encrypted = 0;
	int i1,i2,i3,i4 = 0;
    
    // declaring variables
	
	printf("Enter an encrypted 4-digit combination: ");
    
    // telling user to put the combination
    
	scanf("%1d%1d%1d%1d", &i1,&i2,&i3,&i4);
    
    // scanning the encrypted value indivisually
	
	printf("The real combination is: %1d%1d%1d%1d\n", i4,(9-i2),(9-i3),i1);
    
    // mathematical expression to find the real combination
	
	return 0;
}