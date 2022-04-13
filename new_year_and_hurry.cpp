#include<iostream>
using namespace std;
int main(){
    int n,s=0,t,totalTime=240;
    cin>>n>>t;
    int i=1,c=0;
    for(;i<=n;i++){
        int temp=i*5;
        s+=temp;     
        if(s+t > totalTime)
            break;
        c+=1;
    }
    cout<<c<<endl;
    return 0;
}