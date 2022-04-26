#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        if(a[0]==a[1] && a[1]!=a[2]){
            cout<<3<<endl; 
        }
        else if(a[0]==a[2] && a[1]!=a[0]){
            cout<<2<<endl; 
        }
        else if(a[0]!=a[1] && a[1]==a[2]){
            cout<<1<<endl; 
        }
        else{
            for(int i=2;i<size-1;i++){
                if(a[i]!=a[i+1]){
                    cout<<i+2<<endl; break;
                }
            }
        }
    }
    return 0;
}