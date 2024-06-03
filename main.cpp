#include <iostream>

using namespace std;

int main()
{
    int hoursWorked, noOfchildren;
    double grossPay, regularRate, overtimeRate, incomeTax, nhcl, districtTax, eduFund, netPay;

    cout<< "Number of hours worked: ";
    cin>> hoursWorked ;
    cout<< "Number of children: ";
    cin>> noOfchildren ;

    if (hoursWorked > 40){
        overtimeRate= (40*5)+ (hoursWorked-40*5) * 1.5;
    }
    else{
        regularRate= hoursWorked*5 ;
    }

    grossPay= regularRate + overtimeRate ;
    incomeTax= grossPay*0.15;
    nhcl= grossPay*0.025;
    districtTax= grossPay*0.01;
     if (noOfchildren > 3){
        eduFund= (noOfchildren -3)*0.50 ;
     }
     else{
        eduFund= 0;
     }
     netPay= grossPay-(incomeTax+nhcl+districtTax+eduFund) ;

    cout << "Gross Pay: " << grossPay << endl;
    cout << "Income Tax: " << incomeTax << endl;
    cout << "National Health Contribution Levy: " << nhcl << endl;
    cout << "District Tax: " << districtTax << endl;
    cout << "Educational Fund: " << eduFund << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}
