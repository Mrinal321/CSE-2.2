#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    multimap < int, int > mmp;
    while(n--){
        int a, b; cin >> a >> b;
        mmp.insert({b,a});
    }

    int total = 0;
    int y = 0;
    for(auto u : mmp){
        if(u.second >= y){
            total++;
            y = u.first;
        }
    }

    cout << total;
}