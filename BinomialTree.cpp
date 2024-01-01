// BinomialTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BinomialTreeOption.h"
using namespace OOP;
using namespace std;

int main()
{
    std::cout << "Hello BinomialTreeOption!\n";

    double sharePrice{10};
    double expiryTime{5};
    double strike{100};
    double volatility{0.5}; 
    double interestRate{0.6};
    int TreeLevel{6};

    if (__argc > 2) { 
      cout << "Enter Price: ";
      cin >> sharePrice;
      cout << "Enter Volatility: ";
      cin >> volatility;
      cout << "Enter Call Strike Price: ";
      cin >> strike;
      cout << "Enter Time To Expiry: ";
      cin >> expiryTime;
      cout << "Enter Risk Free Rate: ";
      cin >> interestRate;
      cout << "Enter levels: ";
      cin >> TreeLevel;
    }

    //Enter Security Price : 10
    //  Enter Volatility : 0.5
    //  Enter Call Strike Price : 100
    //  Enter Time To Expiry : 5
    //  Enter Risk Free Rate : 0.6
    //  Enter levels : 3
    //  [10, 0, 0]
    //[5.24402, 1.66667, 0][19.0693, 1.66667, 0]
    //  [2.74997, 3.33333, 0][10, 3.33333, 0][36.364, 3.33333, 0]
    //  OPTION VALUE = 0
    BinomialTreeOption b(sharePrice, expiryTime,  strike,  volatility,  interestRate,  TreeLevel);
    std::cout <<"Result:"<< b.Result()<< ":tree->" << std::endl;
    b.print();
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
