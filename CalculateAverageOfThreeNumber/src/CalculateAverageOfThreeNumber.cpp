//============================================================================
// Name        : CalculateAverageOfThreeNumber.cpp
// Author      : Emul Ahamed Sazib
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Average
{
public:
	double getAverage(int firstNumber,int secondNumber, int thirdNumber)
	{
		return(firstNumber+secondNumber+thirdNumber)/3;
	}
};

int main() {
	//Variable
	int firstNumber;
	int secondNumber;
	int thirdNumber;
	//Taking Input
	cout << "Enter the First Number: ";
	cin>>firstNumber;
	cout << endl<<"Enter the Second Number: ";
	cin>>secondNumber;
	cout << endl<<"Enter the Third Number: ";
	cin>>thirdNumber;

	//Create Object.
	Average obj;
	//Call Function.
	cout<<"The Avg is: "<<obj.getAverage(firstNumber,secondNumber,thirdNumber);
	return 0;
}
