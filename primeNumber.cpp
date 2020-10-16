#include <iostream>
#include <math.h>
using namespace std;
bool PrimilityCheck(int num)    {
    int RoundedSqrt = ceil(sqrt(num));
    for (int i = 2; i<=RoundedSqrt ; i++)   {
        if(num%i==0)    {
            return true;}
              else return false;
    };
}
int main()  {
    cout << "Enter a number" << endl;
    int x;
    cin >> x;
    if (PrimilityCheck(x) == true)  {
        cout << " "<<x<<" is not a prime number"<<endl;
    }   else {
        cout << ""<<x<<" is a prime number" <<endl;
    }
}
