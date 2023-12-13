#include<bits/stdc++.h>
using namespace std;

void swapArr(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    swapArr(i+1 ,arr ,n);
}


int main(){
    int n;
    cout<<"Enter the length of arr : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i = 0; i<n; i++) cin>>arr[i];
    swapArr(0,arr,n);
    cout<<"Array after swappping is : ";
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
}