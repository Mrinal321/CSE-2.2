#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x){
	return x*x*x - x*x + 2;
}

class falsePosition {
    // Access specifier
public:
    int noAns = 0;
    double Ans = 0;
    falsePosition(double a, double b){
        if(func(a) * func(b) >= 0){
            noAns = 1;
            return;
        }

        double c = a;
        for(int i=0; i < MAX_ITER; i++){
            c = (a*func(b) - b*func(a))/ (func(b) - func(a));
            if (func(c)==0)
                break;
            else if (func(c)*func(a) < 0)
                b = c;
            else
                a = c;
        }
        Ans = c;
    }
};

int main(){
	// Initial values assumed
    double a = -200, b = 300;
    falsePosition obj(a,b);
    if(obj.noAns){
        cout << "There is no answer in this range " << endl;
    }else{
        cout << "The ans is : " << obj.Ans << endl;
    }

}
