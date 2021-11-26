//Name:Keene Keannu Kurt C. De Jesus
//Activity: OE6
//Description: Apply searching and sorting ascending and descending elements of arrays
//Date: 11/23/2021

#include <stdio.h>              
#include <conio.h>
#include <iostream>

using namespace std;
int ans=1;
const int size = 100;
void ascend(int a[], int b);
void descend(int a[], int b);
void search(int a[], int b);
void rerun();

int main()                        
{
    int a[size],b,ch;
    cout << "Enter Number of Elements" << endl;
    cin >> b;
     
    cout << "Enter " << b << " numbers" << endl;
      
    for(int i = 0; i < b; i++)
    {
        cin >> a[i];
    }

    do
    {
        system("cls");
        cout << "[1] Searching Array" << endl;
        cout << "[2] Sorting Array (Ascending)" << endl;
        cout << "[3] Sorting Array (Descending)" << endl; //Optional
        cout << "[0] Exit the Program" << endl;
        cout << "Enter your choice: " << endl;
        cin >> ch;

        switch(ch)
        {
            
            case 1:
            {
            system("cls");
            search(a, b);
            rerun();
            break;
            }
            
            case 2:
            {
            system("cls");
            ascend(a, b);
            rerun();
            break;
            }
            
            case 3:
            {
            system("cls");
            descend(a, b);
            rerun();
            break;
            }
            
            case 0:
            {
                cout << "Thank you for using the program" << endl;
                return 0;
            }
            
            default:
            {
                cout << "Invalid input" << endl;
                break;
            }
        }
    
   }while(true);

}


void rerun()
{
    cin.ignore();
    cout << "------------------------------------" << endl;
    cout << "Do you want to try again"<< endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    cout << "------------------------------------"<< endl;
    cin.get();
}

void search(int a[], int b)
{
   for(int x = 0; x < b; x++){

        cout << "Unsorted Array Elmements [" << x << "] "<< a[x] << endl;
    }
}

void ascend(int a[], int b)
{       
     int k, d, j;

    for(d = 0; d < b; d++)
    {
        for(k = d + 1; k < b; k++)
        {
            if(a[k] < a[d])
            {
                j = a[d];
                a[d] = a[k];
                a[k] = j;
            }
        }
    }
    
    cout << "\nAscending : " << endl;                     
    for (d = 0; d < b; d++)
    {
        cout << a[d] << endl;
    }
}

void descend(int a[], int b)
{  
    int k, d, j;

    for(d = 0; d < b; d++)
    {
        for(k = d + 1; k < b; k++)
        {
            if(a[d] < a[k])
            {
                j = a[d];
                a[d] = a[k];
                a[k] = j;
            }
        }
    }
    
    cout << "\nDescending : " << endl;
    for (d = 0; d < b; ++d)
    {
        cout << " ";
        cout << a[d];
        cout << "\n";
    }
}