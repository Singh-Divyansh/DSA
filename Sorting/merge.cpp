#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int low , int mid , int high){
    vector<int> ans;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high;i++){
        arr[i]=ans[i-low];
    }
}

void mSort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mSort(arr,low,mid);
    mSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void mergeSort(int arr[],int n){
    int low = 0, high = n;
    mSort(arr,low,high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
    return 0;
}