#include <iostream>
using namespace std;
class NUM 
    {
        private :
            int n;
        public :
        //Getting the number :
            int getNum(int x)
                {
                    n = x;
                    return n;
                };
        //prinitng the number :
            void printNum() {
                cout << "Number is: " << n ;
            }
        // Binary Plus(+) Operator Overloading :
        NUM operator+(NUM &obj)
            {
                NUM x;
                x.n = this->n + obj.n;
                return (x);
            }
    };
int main()  {
    //instanctating the objects :
    NUM n1 , n2 , n3;
    n1.getNum(5);
    n2.getNum(4);
    n3 = n1 + n2;
    n3.printNum();
    return 0;
}