#include<bits/stdc++.h>
using namespace std;
#define EPSILON .01

double f(double x)
{
    return x*x*x - x*x + 2;
}

class secantMethod{
    // Access specifier
public:
    double Ans;
    secantMethod(double x0, double x1){
        double x2 = x1 -  ((x1 - x0) / (f(x1) - f(x0)) ) * f(x1);
        while (abs(x2) >= EPSILON)
        {
            x2 = x1 -  ((x1 - x0) / (f(x1) - f(x0)) ) * f(x1);
            // x(i+1) = x(i) - {(x(i) - x(i-1)) / (f(i) - f(i-1)) } * f(i)
            x0 = x1;
            x1 = x2;
        }
 
        Ans = x2;
    }
};

int main(){

    //double x0 = -3, x1 = 1; // Initial values assumed
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        double x0, x1; cin >> x0 >> x1;
        secantMethod obj(x0, x1);
        cout << "The value is: " << obj.Ans;
        cout << endl;
    }
    
}
