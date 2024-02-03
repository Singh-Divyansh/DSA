#include<bits/stdc++.h>
using namespace std;

// Take or not Take Approach.

void printer(int ind , vector<int> &ds , int arr[] , int n){
    if(ind == n){
        for(auto it : ds) cout << it << " ";
        cout << endl;
        return;
    }
    // Take the particular index into subsequence.
    ds.emplace_back(arr[ind]);
    printer(ind + 1 , ds , arr , n);
    ds.pop_back();

    // Not take the particular index into subsequnece.
    printer(ind + 1 , ds , arr , n);
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printer(0 , ds , arr , n);
    return 0;
}