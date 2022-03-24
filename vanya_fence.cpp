#include<iostream>
using namespace std;

int main(){
    int n,height,res=0;
    cin>>n>>height;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]<=height){
            res++;
        }
        else{
            res+=2;
        }
    }
    cout<<res<<endl;
    return 0;
}