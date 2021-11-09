//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: Midterm Hands-On Exam
//Description: Making a C++ Program Console Conversion App
//Date: 11/9/2021

#include<iostream>
#include<string>

using namespace std;

int a,ans=1;
double Kg,Gram,Mgram,Mton;
void KgtoGram(double Kg, double Gram = 0);
void GramtoKg(double Gram, double Kg = 0);
void MgramtoGram(double Mgram, double Gram = 0);
void KgtoMton(double Kg, double Mton = 0);
void rerun();

int main()
{
   do
   {
   system("cls");
        cout << endl;
        cout << "Weight Conversion App" << endl;
        cout << "[1] Kilogram to Gram" << endl;
        cout << "[2] Gram to Kilogram" << endl;
        cout << "[3] Milligram to Gram" << endl;
        cout << "[4] Kilogram to Metric Ton" << endl;
        cout << "[0] Exit" << endl;
        cout << "Select Conversion : ";
        cin >> a;

        switch(a){
            
            case 1:
            {
            system("cls");
             cout << "<< Kilogram to Gram >>" << endl;
             cout << "\nEnter No. of Kilogram/s : ";
             cin >> Kg;
            KgtoGram(Kg,Gram);
            rerun();
            break;
            }
            
            case 2:
            {
            system("cls");
            cout << "<< Gram to Kilogram >>" << endl;
            cout << "\nEnter No. of Gram/s : ";
            cin >> Gram;
            GramtoKg(Gram,Kg);
            rerun();
            break;
            }
            
            case 3:
            {
            system("cls");
            cout << "<< Milligram to Gram >>" << endl;
            cout << "\nEnter No. of Milligram/s : ";
            cin >> Mgram;
            MgramtoGram(Mgram,Gram);
            rerun();
            break;
            }
            
            case 4:
            {
            system("cls");
            cout << "<< Kilogram to Metric Ton >>" << endl;
            cout << "\nEnter No. of Kilogram/s : ";
            cin >> Kg;
            KgtoMton(Kg,Mton);
            rerun();
            break;
            }

            case 0:
            {
                cout << "Thank you for using the program";
                return 0;
            }
            default:
            {
                cout << "Invalid input";
            break;
            }
        }
    

   }while(ans==1);
   return 0;
}

void KgtoGram(double Kg, double Gram){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n-----------------------------------------" << endl;
    cout << "Kilogram to Gram : " << (Kg * 1000) << " g" << endl;
   
}

void GramtoKg(double Gram, double Kg){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n-----------------------------------------" << endl;
    cout << "Gram to Kilogram : " << (Gram * .001) << " kg" << endl;
    
}

void MgramtoGram(double Mgram, double Gram){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n-----------------------------------------" << endl;
    cout << "Milligram to Gram : " << (Mgram * .001) << " g" << endl;
}
void KgtoMton(double Kg, double Mton){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n-----------------------------------------" << endl;
    cout << "Kilogram to Metric Ton : " << (Kg * .001) << " t" << endl;
}

void rerun()
{
    cout << endl << "------------------------------------" << endl;
    cout << "Do you want to continue using the program?"<< endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}
