#include<iostream>
using namespace std;
int main(){
    int n,p1=0,p2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b; 
        if(a>b)
            p1++;
        else if(a<b)
            p2++;
    }
    if(p1==p2){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(p1>p2)
        cout<<"Mishka"<<endl;
    else
        cout<<"Chris"<<endl;
    return 0;
}