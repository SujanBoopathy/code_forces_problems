#include<iostream>
using namespace std;
int main(){
    int n,s=0,t,totalTime=240;
    cin>>n>>t;
    int i=0;
    for(;i<n && s+t <= totalTime;i++){
        int temp=i*5;
        s+=temp;
        

    }
    cout<<i<<endl;
    return 0;
}