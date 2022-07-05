#include <iostream>
#include "reverse.h"

using namespace std;

// DO NOT CHANGE THE INTERFACE OF THE REVERSE FUNCTION
int reverse(int given){
	int reverse = 0;
	int modulus = 0;
  // 주어진 숫자가 음수인 경우와 양수인 경우를 구분하기 위해 if-else문을 사용한다.
  if(given <0) 
  // 음수일 경우 catch문으로 넘어가기 위해 throw를 이용한다.
  //throw를 통해 나온 string은 catch문의 const char* msg로 받아 출력한다.
	throw "Negative number!";
  // 0이거나 양수일 경우
  else {
  	while(given != 0) {fmf 
      // modulus는 given/10의 나머지 값으로, given의 1의 자리 숫자를 의미한다.
   		modulus = given % 10;
      // 짝수일 경우와, 홀수일 경우를 나누기 위해 if-else문을 사용한다.
      // 짝수일 경우
  		if (modulus % 2 == 0) {
          // 짝수일 경우 기존 reverse된 값에 일의 자리와 십의 자리의 공간을 만든다.
    			reverse *= 100;
          // reverse 값에 modulus을 일의 자리와 십의 자리에 대입하기 위해 modulus * 10, modulus을 reverse에 더한다.
    			reverse += modulus*10+modulus;
   			}
      // 홀수일 경우
   		else{ 
          // 홀수일 경우 기존 reverse된 값에 일의 자리의 공간을 만든다.
    			reverse *= 10;
          // reverse 값에 modulus를 일의 자리에 대입하기 위해 modulus을 reverse에 대한다.
    			reverse += modulus;
			}
      // 주어진 given 값을 몫만 남기고 10으로 나눈다.
   		given /= 10;
   		}
  	}
	return reverse;
}