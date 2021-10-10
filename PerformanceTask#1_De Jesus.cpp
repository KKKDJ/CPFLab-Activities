//Name: Keene Keannu Kurt C. De Jesus
//Activity Name: Performance Task # 1
//Description: Odd/Even Number Scheme

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  
  int n, r;

  cout << "Enter range of numbers: ";
  cin >> r;
 
  cout << "Enter consecutive number(s): ";
  cin >> n; 
 
  if (n % 2 == 0) {
    cout << n << " - Even number\n";
  }
  
  else {
    cout << n << " - Odd number\n";
  }

  while (n != r) {
    cin >> n;
    
    if (n % 2 == 0) {
    cout << n << " - Even number\n";
    }
    
    else {
    cout << n << " - Odd number\n";
    }

  }
  
  return 0;

}
