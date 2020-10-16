#include <iostream>
#include <math.h>
using namespace std;
//recursive function :
int reverse(int num)    {
    //Find total digits  in given number :
    int digits = (int) log10(num);
    if(num==0)  {
        return 0;
    }
    return ((num%10)*pow(10,digits)) + reverse(num/10);
};
int main()  {
    cout << "Enter the integar to reverse :";
    int num,rev;
    cin >> num;
    rev = reverse(num);
    cout << "Reverse of "<<num<<" is "<<rev<<endl;
    return 0;
}