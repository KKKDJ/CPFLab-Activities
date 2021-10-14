//Name: Keene Keannu Kurt C. De Jesus
//Activity name: OE No. 4
//Description: Postcard from Gizah using nested for loops
//Date: 10/14/2021


#include <iostream>

using namespace std;

int main()
{
    int a, b, c, h;

    cout << "Input the height of the triangle : "; 
    cin >> h;

    for (a = 1; a <= h; a++)
    {
        for (c = 1; c <= (h - a); c++)
        {
        cout << " ";
        }

        for (b = 1; b <= a * 2 - 1; b++)
        { 
            if (b == 1 || b == a * 2 - 1)
            {
            cout << "*";
            }
            
            else if (a == h)
            {
            cout << "*";
            }
            
            else
            {
            cout << " ";
            }

        }   
        cout << " ";
        for (c = 1; c <= (h - a); c++)
        {
            cout << "  ";
        }

        for (b = 1; b <= a * 2 - 1; b++)
        {
            if (b == 1 || b == a * 2 - 1)
            {
            cout << "*";
            }
            
            else if (a == h)
            {
            cout << "*";
            }
            
            else
            {
            cout << " ";
            }

        }
        cout << " ";
        for (c = 1; c <= (h - a); c++)
        {
            cout << "  ";
        }

        for (b = 1; b <= a * 2 - 1; b++)
        {
            if (b == 1 || b == a * 2 - 1)
            {
            cout << "*";
            }
            
            else if (a == h)
            {
            cout << "*";
            }
            
            else
            {
            cout << " ";
            }

        }
        cout << endl;
    }
    return 0;
}