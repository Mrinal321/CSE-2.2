#include<bits/stdc++.h>

using namespace std;

multimap < int, int > mmp;
vector < pair < int, int > > vp;
void generate(vector < int > &subset, int i, vector < int > &nums){
    if(i == nums.size()){
        
        return;
    }

    //ith element not in subset
    generate(subset, i+1, nums);

    //ith element in subset
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
}

int main(){
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        mmp.insert({a, b});
    }

    
}