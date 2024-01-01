// testInterface.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EuropeanPut.h"
#include "EuropeanCall.h"
using namespace OOP;

int main(void)
{
	int numberOfMCSimulations = 100000;
	// Declare the parameters of european options with some reasonable defaults
	double S(50.);	// Current share price
	double T(1.0);	// Expiry time
	double K(50.);	// Strike
	double sig(0.5);	// Volatility
	double r(0.1);	// Interest rate
	 

	// declares objects of types EuropeanPut and EuropeanCall with given input parameters
	EuropeanCall aCall(S, T, K, sig, r);
	EuropeanPut aPut(S, T, K, sig, r);

	// Output call and put values, comparing the anlytic result to the MC result.
	//std::cout << "The price of the call is: " << aCall.PriceOptionAnalytically() << std::endl;
	std::cout << "The price of the call calculated through MC is: " << aCall.PriceOptionMC(numberOfMCSimulations) << std::endl;
	//std::cout << "The price of the put calculated analytically is: " << aPut.PriceOptionAnalytically() << std::endl;
	std::cout << "The price of the put calculated through MC is: " << aPut.PriceOptionMC(numberOfMCSimulations) << std::endl;


	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
