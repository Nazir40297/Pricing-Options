#include <cmath>
#include <random>
#include <iostream>
#include "EuropeanCall.h"

using namespace OOP;

EuropeanCall::EuropeanCall(){
}

EuropeanCall::EuropeanCall(
	double sharePrice,
	double expiryTime,
	double strike,
	double volatility,
	double interestRate
) :
	EuropeanOption(sharePrice, expiryTime, strike, volatility, interestRate){
}


EuropeanCall::~EuropeanCall(){
}

double EuropeanCall::PriceOptionAnalytically(void) {
	std::cout << "EuropeanCall::PriceOptionAnalytically" << std::endl;
    return 1.0;
}


double EuropeanCall::Payoff(double S){
	std::cout << "EuropeanCall::Payoff" << std::endl;
	//if (S <= myStrike){
	//	return 0.0;
	//}	else	{
	//	return (S - myStrike);
	//}
	return std::max( S - myStrike, 0.0);
}
