#include <stdio.h>
#include <stdlib.h>
// Write a program that converts 27° from degrees Fahrenheit (F) to degrees Celsius (C) 
// using the following formula: 
// C = ( F - 32) / 1.8 


int main(){

float F = 27;
float C;

C = (F - 32) / 1.8; 

printf(" %.2f degrees F is equal to %.2f degree C", F,C  );






return 0;

}