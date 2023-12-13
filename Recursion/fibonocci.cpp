#include<bits/stdc++.h>
using namespace std;

int  fibonocci(int a){
    if(a <= 1) return a;
    return fibonocci(a-1) + fibonocci(a-2);
};

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<fibonocci(n);
    return 0;
}
