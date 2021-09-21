//Name: Keene Keannu Kurt C. De Jesus
//Activity name: OE No. 1
//Description: I/O Program for Student Information
//Date: 9/9/2021
#include <iostream>
#include <string>

using namespace std;

int main(){

    string name,gender,address,yrsc,crs,cnum;

    cout << "Hello World :)" << endl;
    cout << "Welcome to Computer Programming Fundamentals" << endl;
    cout << "I am a program designed to input your info for the following: " << endl;
    
    cout << "Enter Your Name    : ";
    getline(cin,name);
    cout << "Enter Your Gender  : ";
    getline(cin,gender);
    cout << "Enter Your Address : ";
    getline(cin,address);
    cout << "Enter Year/Section : ";
    getline(cin,yrsc);
    cout << "Enter your Course  : ";
    getline(cin,crs);
    cout << "Contact Number     : ";
    getline(cin,cnum);

    //OUTPUT DISPLAY
    cout <<"\n====================STUDENT INFO========================" <<endl;
    
    cout <<"\nYour name is " << name;
    
    cout <<"\nGender        : " << gender;
    cout <<"\nAddress       : " << address;
    cout <<"\nYear&Section  : " << yrsc;
    cout <<"\nCourse        : " << crs;
    cout <<"\nContact Number: " << cnum;
    
    cout <<"\nThank you for your time";
    
    return 0;
}