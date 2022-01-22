#include <stdio.h>
#include <stdlib.h>

int main(){

// Values in float to be able to enter decimal number
float F = 27;
float C;

//Formula to convert temperatures from C to F
C = (F - 32) / 1.8; 

// Printing finla result 

printf(" %.2f degrees F is equal to %.2f degree C", F,C  );

return 0;

}