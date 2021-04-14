#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*Harvy Jones Pontillas DICT 1-2*/
int main()
{   //declare variables
    double principal=0.00, interest=0.00, rate=0.00, time=0.00, withholdingTax=0.00, withholdingTaxRate=0.00;

    //input items
    cout << "\n PRINCIPAL VALUE: " <<"     Php ";
    cin >> principal;
    cout << " INTEREST RATE (%):\t   ";
    cin >> rate;
    cout << " TIME (IN YEARS):          ";
    cin >> time;
    cout << " WITHHOLDING TAX RATE (%): ";
    cin >> withholdingTaxRate;

    //interest and withholding tax computation
    interest = principal*(rate*0.01)*time;
    withholdingTax = interest-(interest*(withholdingTaxRate*0.01));

    //output display
    cout <<fixed<<setprecision(2);
    cout << "\n INTEREST:\t\t   " << interest;
    cout << "\n WITHHOLDING TAX:\t   " << withholdingTax <<endl;
    return 0;
}
