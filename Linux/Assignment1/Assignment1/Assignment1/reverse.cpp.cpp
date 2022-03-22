#include <iostream>
#include "reverse.h"

using namespace std;

// DO NOT CHANGE THE INTERFACE OF THE REVERSE FUNCTION
int reverse(int given){
	int reverse = 0;
	int modulus = 0;
  if(given <0) 
	throw "Negative number!";
  else {
  	while(given != 0) {
   		modulus = given % 10;
  		if (modulus % 2 == 0) {
    			reverse *= 100;
    			reverse += modulus*10+modulus;
   			}
   		else{ 
    			reverse *= 10;
    			reverse += modulus;
			}
   		given /= 10;
   		}
  	}
	return reverse;
}