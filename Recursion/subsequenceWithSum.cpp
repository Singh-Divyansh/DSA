#include<bits/stdc++.h>
using namespace std;

// void printer(int ind , vector<int> &ds , int s , int sum , int arr[] , int n){
//     if( ind == n){
//         if( s == sum){
//             for(auto it : ds) cout<< it << " ";
//             cout << endl;
//         }
//         return;
//     }
//     // Pick 
//     ds.emplace_back(arr[ind]);
//     s += arr[ind];
//     printer(ind+1, ds , s , sum , arr , n);

//     s -= arr[ind];
//     ds.pop_back();

//     // Not pick 
//     printer(ind+1 , ds , s , sum , arr , n);
// }

//Only one output.
bool printer(int ind , vector<int> &ds , int s , int sum , int arr[] , int n){
    if( ind == n){
        if( s == sum){
            for(auto it : ds) cout<< it << " ";
            cout << endl;
            return true;
        }
        else return false;
    }
    // Pick 
    ds.emplace_back(arr[ind]);
    s += arr[ind];
    if(printer(ind+1, ds , s , sum , arr , n) == true) return true;

    s -= arr[ind];
    ds.pop_back();

    // Not pick 
    if(printer(ind+1 , ds , s , sum , arr , n) ==true) return true;

    else return false;
}

int main(){
    int arr[] = { 1 , 2 , 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printer(0 , ds , 0 , sum , arr , n);
    return 0;
}

