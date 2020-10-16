#include <iostream>
#include <math.h>
using namespace std;
enum Shape {Circle=1 , Rectangle=2 , Triangle=3};
float areaCircle (float radius) {
    return M_PI*radius*radius ;
};
float areaRectangle (float length , float width)    {
    return length * width ;
};
float areaTriangle (float height , float base)  {
    return (base * height)/2;
};

int main () {
    int i = -1;
    cout << "select a shape : 1 Circle , 2 Rectangle , 3 Triangle" << endl;
    cin >> i;
    switch (i)
    {
    case Circle:
        float rad;
        cout << "Enter the radius : "<< endl;
        cin >> rad ;
        cout <<"The area is " << areaCircle(rad) << " sq unit";
        break;
    
    case Rectangle:
        float length , width;
        cout << "Enter Length and Width of Rectangle :" << endl;
        cin >> length >> width ;
        cout <<"The area is " << areaRectangle(length,width) << " sq unit"<< endl;
        break;

    case Triangle:
        float height, base;
        cout << "Enter height and base of triangle : "<< endl;
        cin >> height >> base;
        cout <<"The area is " << areaTriangle(height,base) << " sq unit"<< endl;
        break;
    
    }
}