#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x*x*x - x*x + 2;
}
 
double derivFunc(double x)
{
    return 3*x*x - 2*x;
}

class newtonRaphson{
    // Access specifier
public:
    double Ans;
    newtonRaphson(double x){
        double h = func(x) / derivFunc(x);
        while (abs(h) >= EPSILON)
        {
            h = func(x)/derivFunc(x);
            // x(i+1) = x(i) - f(x) / f'(x) 
            x = x - h;
        }
 
        Ans = x;
    }
};

int main(){

    double x0 = .5; // Initial values assumed
    newtonRaphson obj(x0);
     cout << "The value is: " << obj.Ans;
    
}
