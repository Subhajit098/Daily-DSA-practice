#include<bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    map<int,int>mp;
    for(auto it:arr) mp[it]++;

    vector<int>vec;
    for(auto it:mp){
        if(it.second%2==1) vec.push_back(it.first);
    }

    reverse(vec.begin(),vec.end());
    return vec;
}