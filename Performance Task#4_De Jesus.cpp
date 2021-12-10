#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

void grade(float avg, int subjects);
void rerun(),readfile(),cleardata();
float avg, mark[8], sum = 0;
int subjects = 8;

int main()

{
        int ch, ans;

        do{
        system("cls");
        cout << "\n <-- Grading System Program -->" << endl;
        cout << "\n =======COMPUTER SCIENCE=======" << endl;
        cout << " {1} START " << endl;
        cout << " {2} View Data" << endl;
        cout << " {3} Clear Data" << endl;
        cout << " {0} Exit  " << endl;
        cout << " Select Option : ";
        cin >> ch;

        switch(ch)
            { 
            case 1:
            {
                grade(avg, subjects);
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
        cout << "\nPlease press Enter to continue ---";
        cin.get();
    }

    void grade(float avg, int subjects) // void with parameter
    {
        ofstream ou_stream;
        ou_stream.open ("grade_output.txt", ios::app);


    string sidn;
    int k;
    string result;
    
    cout << "Enter Student ID Number               : ";
    cin.ignore();
    getline(cin,sidn);
    
    cout << "Introduction to Computing (ITC)       : ";
    cin >> mark[0];
    
    cout << "Introduction to Computing Lab (ITCL)  : ";
    cin >> mark[1];

    cout << "Fundamentals of Programming (CPF)     : ";
    cin >> mark[2];

    cout << "Fundamentals of Programming Lab (CPFL): ";
    cin >> mark[3];

    cout << "Being Skills 1 (GEBNG1)               : ";
    cin >> mark[4];

    cout << "Life and Works of JPL (GEJPL)         : ";
    cin >> mark[5];

    cout << "Mathematics in Modern World (GEMTH)   : ";
    cin >> mark[6];

    cout << "Physical Fitness (GEPE1)              : ";
    cin >> mark[7];

    for (k = 0; k < 8; k++) //array
    {
        sum = sum + mark[k];
    }

    cout << "=================================";
    cout << "\n Total Grade = " << sum;
    avg = sum / 8;

    cout << "\n Average : " << avg;
    
    
    if (avg > 3) {
        result = "Failed";
    }
    
    else if (avg <= 3) {
        result = "Passed";
    }
    
    cout << "\n Grade   : " << result;
    
    
    //Save output to txt
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ou_stream << "==========================================" << endl;
    ou_stream << "Student ID Number  : " << sidn << endl;
    ou_stream << "Average            : " << avg << endl;
    ou_stream << "Result             : " << result << endl;
    ou_stream << "\n==========================================" << endl;
    
    ou_stream.close();
}
        
    void readfile() // View the data inside the file
    {
        string input;
        ifstream viewfile("grade_output.txt");
        while(getline(viewfile, input))
        {
            cout << input << endl;
    }

        viewfile.close();
    }
    
    void cleardata()
    {
        fstream clear;

        clear.open("grade_output.txt", ios::out | ios::trunc); //Delete data inside the txt file
        cout << "Data erased" << endl;
    }