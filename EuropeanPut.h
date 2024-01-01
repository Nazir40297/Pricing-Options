//------------------------------------------------------------------------------
//
// OOP
// EuropeanCall.h
//
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// include guard

#ifndef OOP_EUROPEANPUT_H
#define OOP_EUROPEANPUT_H

//------------------------------------------------------------------------------
// include files
#include <string>
#include <cmath>
#include "EuropeanOption.h"
//------------------------------------------------------------------------------
// namespace definition
namespace OOP {

	//------------------------------------------------------------------------------
	/*! \class EuropeanCall in EuropeanPut.h
	 *  \brief This is the class for a EuropeanCall with sharePrice, expiryTime, strike, volatility, interestRate
	 */
	class EuropeanPut : public EuropeanOption {
	public:

		EuropeanPut();
		EuropeanPut(
			double sharePrice,
			double expiryTime,
			double strike,
			double volatility,
			double interestRate
		);
		~EuropeanPut();

		// PriceOptionAnalytically return the option value from the analytic Black Scholes formula, and PriceOptionMC performs numberOfRuns MC simulations to estimate the price
		double PriceOptionAnalytically(void);
		bool is_in_the_money(double S) const { return (S < myStrike)?  true:false ; }

		// We declare a payoff function giving the payoff for given share price at expiry
		double Payoff(double S);

	};	// class EuropeanPut

} // namespace OOP

#endif	// OOP_EUROPEANPUT_H

//------------------------------------------------------------------------------





