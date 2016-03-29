#include <iostream>
#include "FizzBuzz.h"
#include <string>

using namespace std;



void doTheFizzBuzz(int num) {
	
	if (num % 15 == 0) {
		cout << "FizzBuzz" << endl;
		
	} else if (num % 5 == 0) {
		cout << "Buzz" << endl;
		
	} else if (num % 3 == 0) {
		cout << "Fizz" << endl;
		
	} else {
		string stringValue = to_string(num);
		cout << stringValue << endl;
	}
}









