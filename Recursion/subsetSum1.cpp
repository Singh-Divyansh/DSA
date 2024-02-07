#include<bits/stdc++.h>
using namespace std;

void func(int ind , int sum, vector<int>&arr,int n , vector<int>&ans){
    if(ind==n){
        ans.push_back(sum);
        return;
    }

    //pick
    func(ind+1,sum + arr[ind],arr,n,ans);

    //not pick
    func(ind+1,sum ,arr,n,ans);
}

int main(){
    vector<int> arr = {3,1,4};
    vector<int> ans;
    func(0,0,arr,arr.size(),ans);
    sort(ans.begin(),ans.end());
    for(auto it:ans) cout<<it<<' ';
    return 0;
}