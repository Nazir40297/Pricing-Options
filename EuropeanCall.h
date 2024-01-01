//------------------------------------------------------------------------------
//
// OOP
// EuropeanCall.h
//
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// include guard

#ifndef OOP_EUROPEANCALL_H
#define OOP_EUROPEANCALL_H

//------------------------------------------------------------------------------
// include files
#include <string>
#include <cmath>
#include "EuropeanOption.h"
//------------------------------------------------------------------------------
// namespace definition
namespace OOP {

	//------------------------------------------------------------------------------
	/*! \class EuropeanCall in EuropeanCall.h
	 *  \brief This is the class for a EuropeanCall with sharePrice, expiryTime, strike, volatility, interestRate
	 */
	class EuropeanCall : public EuropeanOption {
	public:
		EuropeanCall();
		EuropeanCall(
			double sharePrice,
			double expiryTime,
			double strike,
			double volatility,
			double interestRate
		);
		~EuropeanCall();

		// PriceOptionAnalytically return the option value from the analytic Black Scholes formula
		double PriceOptionAnalytically(void);
		bool is_in_the_money(double S) const { return (S > myStrike) ? true : false; }

		// We declare a payoff function giving the payoff for given share price at expiry
		double Payoff(double S);

	};	// class EuropeanCall

} // namespace OOP

#endif	// OOP_EUROPEANCALL_H

//------------------------------------------------------------------------------


