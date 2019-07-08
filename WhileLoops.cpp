/*
While Loops
Jack Ross
7/6/2019
*/

#include <iostream>
using namespace std;

int main()
{
	/* 
	Initialize firstNum & secondNum
	Take user input for firstNum & secondNum
	Check if firstNum is greater than or equal to secondNum
	If it is true, give error message and end program
	*/
	int firstNum, secondNum;
	cout << "Enter two numbers." << endl << "First number must be less than the second number you enter" << endl;
	cout << "Enter numbers: ";
	cin >> firstNum >> secondNum;
	cout << endl;
	if (firstNum >= secondNum) {
		cout << "You entered a greater or equal value for the second number than the first. Try again." << endl;
		return 0;
	}


	
	/*
	Initialize odds eqaul to the value to firstNum plus the first increment to make an odd number if firstNum is not odd
	Print the value of odds each loop until odds is greater than or equal to secondNum
	Increment odds by 2 each loop
	*/
	cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;
	int odds = firstNum + (secondNum % 2 == 0);

	while (odds <= secondNum) {
		cout << odds << " ";
		odds += 2;

	}
	cout << endl;


	/*
	Initialize evens equal to firstNum
	Initialize sum equal to zero
	While evens is less than or equal to secondNum check if evens / 2 has a remainder of 0, indicating an even number
	If so, increment sum by the value of evens
	Increment evens
	Print sum
	*/
	cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = ";
	int evens = firstNum;
	int sum = 0;

	while (evens <= secondNum) {
		if (evens % 2 == 0)
			sum += evens;
		evens++;
	}
	cout << sum << endl;


	/*
	Initialize min and max equal to 1 and 10 respectively
	While min is less than or equal to max, print blankspace, min, more blankspace (for formatting output), and the square of min
	Increment min
	*/
	cout << "Number    Square of Number" << endl;
	int min = 1;
	int max = 10;
	while (min <= max) {
		cout << "   " << min << "                 " << min * min << endl;
		min++;
	}
	cout << endl;


	/*
	Initialize eOdds and eSum equal to firstNum and 0 respectively
	While eOdds is less than or equal to secondNum, check if eOdds / 2 has a remainder of 0
	If so, increment eSum by the square of eOdds
	Increment eOdds
	*/
	cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = ";
	int eOdds = firstNum;
	int eSum = 0;
	while (eOdds <= secondNum) {
		if (eOdds % 2 != 0)
			eSum += eOdds * eOdds;
		eOdds++;
	}
	cout << eSum << endl;


	/*
	Initialize letter equal to the character A
	While letter is greater than or equal to A and letter is less than or equal to Z, print letter and a space
	Increment letter
	*/
	cout << "Upper case letters are: ";
	char letter = 'A';
	while (letter >= 'A' && letter <= 'Z') {
		cout << letter << " ";
		letter++;
	}
	cout << endl;
}
