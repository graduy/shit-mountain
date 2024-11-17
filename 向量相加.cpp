#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x;
    double y;
public:
    Vector(double a, double b) : x(a), y(b) {}  
};
int main() {
    double x1,y1;
    double x2,y2;
    double x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    Vector v1(x1, y1);
    Vector v2(x2, y2);
    vector v3(x3,y3);


   x3 = x1 + x2;
   y3 = y1 + y2;
   float momo = sqrt(x3^2 + y3^2);
   cout<<"mo chang shi "<<momo<<endl;

   

    return 0;
}