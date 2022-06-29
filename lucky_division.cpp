#include<iostream>
using namespace std;

void main(){
    int n,flag=0;
    cin>>n;
    int arr[12]={4,7,44,47,74,444,447,477,474,777,774,744};
    for(int i=0;i<12;i++){
        if(n%arr[i]==0)
            flag=1;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
   
}
