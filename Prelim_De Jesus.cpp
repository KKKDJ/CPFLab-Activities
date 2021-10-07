#include <iostream>
#include <string>

using namespace std;

int main(){
    const double TAX = 0.12;
    string ename,emnum,pdate;
    double hprate, gpay, PH, SSS, pibig, gross_pay, net_pay, wtax,hworked;

    cout << "Enter your name    : ";
    getline (cin, ename);
    cout << "Employee number    : ";
    getline (cin, emnum);
    cout << "Date of payday     : ";
    getline (cin, pdate);
    cout << endl;
    
    cout << "Hourly pay rate    : ";
    cin >> hprate;
    cout << "Hours worked       : ";
    cin >> hworked;
    cout << endl;


    cout << "Payroll summary for: " << ename << endl;
    cout << "Employee No.       : " << emnum << endl;
    cout << "Payroll date       : " << pdate << endl;
    cout << endl;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "You earned " << hworked << " at " << hprate << endl;
    
    gross_pay = hprate * hworked;
    wtax = gross_pay * TAX;
    PH = 150;
    SSS = 250;
    pibig = 200;
    net_pay = gross_pay - wtax - PH - SSS - pibig;
    

    cout << "Gross pay:          : " << "Php " << gross_pay << endl;
    cout << "Withholding tax     : " << wtax << endl;
    cout << "Philhealth          : " << PH << endl;
    cout << "SSS                 : " << SSS << endl;
    cout << "Pagibig             : " << pibig << endl;
    cout << "\n---------------------------------------------------" << endl;
    cout << "Net pay             : " << "Php " << net_pay << endl;
    
    if(net_pay < 5000.00) {
        cout << "Employee status : Contractual ";
    
    }else if(net_pay >= 5000.00 && net_pay <= 10000.00) {
        cout << "Employee status : Probationary";
    
    }else if (net_pay > 10000.00) {
        cout << "Employee status : Regular";
    } 
    return 0;
} 