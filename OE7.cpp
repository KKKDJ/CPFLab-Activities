//Name:Keene Keannu Kurt C. De Jesus
//Activity: OE7
//Description: Implement login credentials to any of recent laboratory activities using C-string
//Date: 12/7/2021


#include<iostream> 
#include<fstream>
#include<cstdlib>
#include<cstring>

using namespace std;

void rerun(),pay(),readfile(),cleardata();

int main(){

    int ans = 0,ch,login;
    char my_user[12] = "kkkuser",user[12];
    char my_pass[12] = "kkkpass",pass[12];

    {
        cout << "Please enter your username: ";
        cin >> user;       

        if  (!(strcmp(my_user, user)))
        {
            cout << "Please enter your password: ";
            cin >> pass;
            
        }
        
        if  (!(strcmp(my_pass, pass)))
        {
            system("cls");
            cout << "Logged In Succesfully, Welcome " << user << endl;
        }
        
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
        }
    }
    
    cout << "Thank you for logging in.\n";

    do{
        system("cls");
        cout << "\nWelcome " << my_user << "!" << endl;
        cout << "\n <-- Salary Program -->" << endl;
        cout << " {1} New Data " << endl;
        cout << " {2} View Data" << endl;
        cout << " {3} Clear Data" << endl;
        cout << " {0} Exit  " << endl;
        cout << " Select Option : ";
        cin >> ch;

        switch(ch)
            {
            case 1:
            {
                pay();
                rerun();
                break;
            }
            
            case 2:
            {
                readfile();
                rerun();
                break;
            }

            case 3:
            {
                cleardata();
                rerun();
                break;
            }

            case 0:
            {
                cout << "Thank you for using the program";
                return 0;
                break;
            }

            default:
            {
                cout << "Invalid Input";
                rerun();
                break;
            }
        }
    
    }while(ans == 0);
}
    
    void rerun()
    {
        cin.ignore();
        cout << "Please press Enter to continue ---";
        cin.get();
    }

    void pay()
    {
        ofstream ou_stream;
        ou_stream.open ("pay_output.txt", ios::app);


    string ename;
    int num_hours_work,eid;
    double rate_per_hour,gross_pay,net_pay,VAT;

    cout << "Enter Employee ID             : ";
    cin >> eid;
    cin.ignore();
    
    cout << "Enter Employee Name           : ";
    getline(cin,ename);

    cout << "Enter numbers of hours worked : ";
    cin >> num_hours_work;
    
    cout << "Enter Rate per hour           : ";
    cin >> rate_per_hour;

    gross_pay = num_hours_work * rate_per_hour;
    
    if(gross_pay > 40000) {
        VAT = gross_pay * 0.12; // 12% VAT
    net_pay = gross_pay - VAT;
    }
    
    else if(gross_pay >= 30000 && gross_pay <= 40000) {
        VAT = gross_pay * 0.10; // 10% VAT
        net_pay = gross_pay - VAT;
    }

    else {
        VAT = gross_pay * 0.05; // 5% VAT
        net_pay = gross_pay - VAT;
    }
    

    //Save output to txt
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ou_stream << "==========================================" << endl;
    ou_stream << "Employee ID        : " << eid << endl;
    ou_stream << "Employee Name      : " << ename << endl;
    ou_stream << "Employee Gross Pay : " << gross_pay << endl;
    ou_stream << "Employee TAX Amount: " << VAT << endl;
    ou_stream << "Employee Net Pay   : " << net_pay << endl;
    ou_stream << "==========================================" << endl;
    
    ou_stream.close();
}
        
    void readfile()
    {
        string input;
        ifstream viewfile("pay_output.txt");
        while(getline(viewfile, input))
        {
            cout << input << endl;
    }

        viewfile.close();
    }
    
    void cleardata()
    {
        fstream clear;

        clear.open("pay_output.txt", ios::out | ios::trunc); //Delete data inside the txt file
        cout << "Data erased" << endl;
    }