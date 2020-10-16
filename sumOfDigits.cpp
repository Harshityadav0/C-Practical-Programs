#include <iostream>
using namespace std;
int main()  {
    int x,s=0;
    cout <<"Enter the Integar to add it\'s digits :";
    cin >>x;
    while(x !=0)    {
        s = s + x%10;
        x = x/10;
    }
    cout << "\nThe sum of the digits :"<<s <<endl;
    return 0;
}