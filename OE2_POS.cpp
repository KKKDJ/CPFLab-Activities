//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: OE2
//Description: POS Computer System that computes at least 3 kinds of product input, plus 12% VAT.

#include<iostream>
#include<string>

const double TAX = 0.12;
using namespace std;

int main(){

    string cname,pn1,pn2,pn3,pid1,pid2,pid3;
    int pq1,pq2,pq3;
    double pn1_price, pn2_price, pn3_price, t_price, ptot1, ptot2, ptot3, vat;

    cout << "Enter Customer Name    :   ";
    getline(cin,cname);
    cout << "Enter Product 1 ID     :   ";
    cin >> pid1;
    cout << "Enter Product 1 NAME   :   ";
    cin >> pn1;
    cout << "Enter QUANTITY         :   ";
    cin >> pq1;
    cout << "Enter Product PRICE    :   ";
    cin >> pn1_price;
    cout << "\n==========================================" << endl;
    cout << "Enter Product 2 ID     :   ";
    cin >> pid2;
    cout << "Enter Product 2 NAME   :   ";
    cin >> pn2;
    cout << "Enter QUANTITY         :   ";
    cin >> pq2;
    cout << "Enter Product PRICE    :   ";
    cin >> pn2_price;
    cout << "\n==========================================" << endl;
    cout << "Enter Product 3 ID     :   ";
    cin >> pid3;
    cout << "Enter Product 3 NAME   :   ";
    cin >> pn3;
    cout << "Enter QUANTITY         :   ";
    cin >> pq3;
    cout << "Enter Product PRICE    :   ";
    cin >> pn3_price;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n----------------------------------------" << endl;
    cout << "==============RECEIPT===================" << endl;
    cout << "Product 1 NAME:  " << pn1 << endl;
    cout << "Quantity      :  " << pq1 << endl;
    cout << "Price         :  " << "P" << (ptot1 = pn1_price*pq1) << endl;
    cout << "\n--------------------------------------" << endl;
    cout << "Product 2 NAME:  " << pn2 << endl;
    cout << "Quantity      :  " << pq2 << endl;
    cout << "Price         :  " << "P" << (ptot2 = pn2_price*pq2) << endl;
    cout << "\n--------------------------------------" << endl;
    cout << "Product 3 NAME:  " << pn3 << endl;
    cout << "Quantity      :  " << pq3 << endl;
    cout << "Price         :  " << "P" << (ptot3 = pn3_price*pq3) << endl;

    cout << "\n==========================================" << endl;
    cout << "Thank you  "   << cname << endl;
    cout << "TOTAL AMOUNT WITHOUT VAT:  " << "P" << (t_price = ptot1+ptot2+ptot3) << endl;
    cout << "VAT AMOUNT              :  " << "P" << (vat = t_price*TAX) << endl;
    cout << "TOTAL AMOUNT WITH VAT   :  " << "P" << (t_price - (t_price*TAX)) << endl;
    return 0;
}