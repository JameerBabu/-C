#include<iostream>
#include<cmath>
using namespace std;

int main() {
     float x,y,z,a;

cin >> x;
/* x is hours */
cin >> y ;
/* y is minutes */
 z =  60*x - 11*y ;
 a = z/2 ;
 if (a  < 0) {
   a = a+360 ;
 }
cout <<  "angle between hours hand and minutes hand at "<< x<<"hours"<< y << "minutes is "<< a << "degrees" << endl;
            return 0;
}
