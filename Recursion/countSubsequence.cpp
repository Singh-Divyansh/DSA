#include<bits/stdc++.h>
using namespace std;

int printer(int ind , int s , int sum , int arr[] , int n){
    if( ind == n){
        if( s == sum) return 1;
        else return 0;
    }
    // Pick 
    s += arr[ind];
    int l = printer(ind+1, s , sum , arr , n);

    s -= arr[ind];

    // Not pick 
    int r = printer(ind+1 , s , sum , arr , n);

    return l + r;
}

int main(){
    int arr[] = { 1 , 2 , 1};
    int n = 3;
    int sum = 2;
    cout<<printer(0 , 0 , sum , arr , n);
    return 0;
}