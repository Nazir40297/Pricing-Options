//------------------------------------------------------------------------------
//
// OOP
// AmericanCall.h
//
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// include guard

#ifndef OOP_BINOMIALTREE_H
#define OOP_BINOMIALTREE_H

//------------------------------------------------------------------------------
// include files
#include <vector> 
#include <string> 
#include <iostream>
 
//------------------------------------------------------------------------------
// namespace definition
namespace OOP {

	struct Node { 
		double optionvalue;
		double t;
		int num;
	};

	//------------------------------------------------------------------------------
	/*! \class BinomialTreeOption in BinomialTreeOption.h
	 *  \brief This is the class for a BinomialTreeOption with sharePrice, expiryTime, strike, volatility, interestRate
	 */
	class BinomialTreeOption {
	public:
		BinomialTreeOption(double sharePrice,	double expiryTime,double strike,double volatility, double interestRate,	int TreeLevel);
		~BinomialTreeOption();
		double Result();

		void print()const; 

	private: 

		std::vector<std::vector<Node>> _tree;
		int _n;
		double mySharePrice;
		double myVolatility;
		double myStrike;
		double myInterestRate;
		double myExpiryTime;
		double mytstep;  
	
	};// Class BinomialTreeOption

}// Namespace OOP

#endif //OOP_BINOMIALTREE_H