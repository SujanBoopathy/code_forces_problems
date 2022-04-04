#include<iostream>
using namespace std;

int main(){
    int n,a,b,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a%b!=0)
            cout<<b-(a%b)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}