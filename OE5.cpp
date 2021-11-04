//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: OE5
//Description: Reverse a string or unsigned integer using void functions and functions with parameters
//Date: 11/2/2021

#include<iostream>
#include<string>

using namespace std;

int ans=1,a,i,k=0,num;
char ch[25];
void reverse();
void TryAgain();
void reverseint();

int main()
{
   do
   {
   system("cls");
        cout << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse an Unsigned Integer" << endl;
        cout << "[3] Exit " << endl;
        cout << "Select Program : ";
        cin >> a;

        switch(a){
            
            case 1:
            {
            system("cls");
             cout << "<< Reverse a String >>" << endl;
             cout << "\nEnter a word : ";
             cin.ignore();
             cin.getline(ch,25);
            reverse();
            TryAgain();
            break;
            }
            
            case 2:
            {
            system("cls");
            cout << "<< Reverse an unsigned integer" << endl;
            cout << "\nEnter a Number [0-9]: ";
            cin.ignore();
            cin.getline(ch,25);
            reverseint();
            TryAgain();
            break;
            }
            
            case 3:
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

void reverse(){
    

    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    cout << "Reversed word: ";

    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
   
}

void reverseint(){

    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    cout << "Reversed number: ";

    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}

void TryAgain()
{
    cout << endl << "------------------------------------" << endl;
    cout << "Do you want to try again"<< endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}