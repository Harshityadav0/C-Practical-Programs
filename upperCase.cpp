#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()  {
    cout << "\t \t Lower Case String to Upper Case String "<<endl;
    cout << "Enter the string :" <<endl;
    string x;
    cin >> x;
    transform(x.begin(), x.end() , x.begin() , ::toupper);
    cout << "The UpperCase string is :" << x;
    return 0;
}