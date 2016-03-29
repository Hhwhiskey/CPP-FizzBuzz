#include <iostream>
#include <string>
#include "FizzBuzz.h"

using namespace std;

int num;



int main() {

	cout << "Please enter a number" << endl;

	cin >> num;

	doTheFizzBuzz(num);

	return 0;
}