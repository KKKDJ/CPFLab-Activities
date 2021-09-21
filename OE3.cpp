#include<iostream>

using namespace std;

int main(){

    int num_hours_work;
    double rate_per_hour;
    double gross_pay;

    cout << "Enter numbers of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter Rate per hour           : ";
    cin >> rate_per_hour;
    
    if(num_hours_work == 0 || rate_per_hour == 0) {
        cout << " You did not input anything!";
        return 0;
    }

    if(num_hours_work <= 40){
        gross_pay = rate_per_hour * num_hours_work; // Regular hours worked
    }else if(num_hours_work > 40){
        gross_pay = rate_per_hour * 40 + 1.5 * rate_per_hour * (num_hours_work - 40); // With OVERTIME
    }
    
    
    cout << "Number of hours worked: " << num_hours_work << endl;
    cout << "Your Gross Pay       >> " << gross_pay << endl;
    return 0;
}