#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum=0.0,ans=0.0;
    int a[120];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}