//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: OE3
//Description: Application of Branching with Conditional Statement


#include<iostream>
#include<string>

using namespace std;

int main(){

    string ename,eid;
    int num_hours_work;
    double rate_per_hour,gross_pay,net_pay,VAT;

    cout << "Enter Employee ID             : ";
    getline(cin,eid);
    cout << "Enter Employee Name           : ";
    cin >> ename;
    
    cout << "Enter numbers of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter Rate per hour           : ";
    cin >> rate_per_hour;
    
    if(num_hours_work == 0 || rate_per_hour == 0) {
        cout << " You did not input anything!";
        return 0;
    }    

    cout << "Number of hours worked: " << num_hours_work << endl;
    cout << "Your Gross Pay       >> " << (gross_pay = num_hours_work * rate_per_hour) << endl;
    
        if(gross_pay > 40000) {
        VAT = gross_pay * 0.12; // 12% VAT
    }else if(gross_pay < 20000) {
        VAT = gross_pay * 0.05; // 5% VAT
    }else if(gross_pay >= 30000 && gross_pay <= 40000) {
        VAT = gross_pay * 0.10; // 10% VAT
    }
    cout << "VAT AMOUNT           >> " << VAT << endl;
    cout << "\n----------------------" << endl;
    cout << eid << endl;
    cout << "Hello  " << ename << endl;
    cout << "Your Net Pay         >> " << (net_pay = gross_pay - VAT) << endl;
    
    
    return 0;
}
