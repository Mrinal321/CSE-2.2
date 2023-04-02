#include<bits/stdc++.h>
using namespace std;
#define EPSILON .01

float linearCurveFitting(){
    int n, i, j, k; cin >> n;
    float x[n+1], y[n+1], x_sum = 0, y_sum = 0, x2_sum = 0, xy_sum = 0;
    for(i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
        x_sum+=x[i];
        y_sum+=y[i];
        x2_sum+=(x[i]*x[i]);
        xy_sum+=(x[i]*y[i]);
    }
    float a0_1 = n;
    float a1_1 = x_sum;
    float e_1 = y_sum;
    float a0_2 = x_sum;
    float a1_2 = x2_sum;
    float e_2 = xy_sum;

    a1_2 = a1_
}

int main(){

    linearCurveFitting();
    
}
