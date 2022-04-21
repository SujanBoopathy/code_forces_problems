#include<iostream>
using namespace std;
int main(){
    int n,k,p,valid=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p+k<=5){
            valid++;
        }
    }
    cout<<valid/3<<endl;
    return 0;
}