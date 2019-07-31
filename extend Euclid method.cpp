#include<iostream>
using namespace std;
int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        cout<<"ans "<<endl;
        d = A;
        x = 1;
        y = 0;
    }
    else {
        cout<<"call "<<B<<" "<<(A%B)<<endl;
        extendedEuclid(B, A%B);
         cout<<x<<" "<<y<<" "<<B<<" "<<A%B<<endl;
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
        cout<<temp<<" "<<y<<endl;
    }
}

int main( ) {
extendedEuclid(888, 54);
cout << "The GCD of 888 and 54 is " << d << endl;
cout << "Coefficients x and y are "<< x <<  " and  " << y << endl;
return 0;
}
