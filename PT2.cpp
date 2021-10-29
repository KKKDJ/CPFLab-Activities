//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: Performance Task 2
//Description: Conversion console app using functions: [Dollar to Peso and Peso to Dollar] (Debugging Activity)
//Date: 10/26/2021

#include <iostream>
#include <locale>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPesos(float conversionRate, unsigned usd = 0);
void PesosToDollars(float conversionRate, unsigned php = 0);
int ans = 1;
int main() 

{
    //Declare the variables for the user input.
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    unsigned dollarsIn, pesosIn;
    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                cout << "Enter a US Dollar Amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> dollarsIn;
                 dollarsToPesos(conversionRate,dollarsIn); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                // Show the conversion by calling the function.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:
            {
                system("cls");
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "\nEnter a PHP peso amount (without the peso sign, commas or a decimal) : [####] "; //Create your own function for this problem set
                cin >> pesosIn;
                PesosToDollars(conversionRate, pesosIn);
                promptAndWait();
                break;
            }
            case 3:
            {
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                break;
            }
        }
    }while(ans == 1);
return 0;
}       //End of main function

// Define the promptAndWait() function.
void promptAndWait()
{
    cout << "Do you want to continue? " << endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    cin >> ans;
}

// Define the dollarsToPeso function.
void dollarsToPesos (float conversionRate, unsigned usd) 
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << usd << " US = " << "P" << (conversionRate * usd) << " Pesos. \n";
}
    // Define the PesosToDollar function.
void PesosToDollars (float conversionRate, unsigned php) 
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP" << php << " Pesos = " << "$" << (php / conversionRate) << " USD. \n";
}