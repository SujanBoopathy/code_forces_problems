#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mVal=min(m,n);
    if(mVal%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}