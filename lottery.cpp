#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        if(n%100==0){
            count=n/100;
            break;
        }
        if(n>=100){
            n=n-100;
            count++;
            if(n!=0) continue;
        }
        
        if(n>=20){
            n=n-20;
            count++;
            if(n!=0) continue;
        }
        if(n>=10){
            n=n-10;
            count++;
            if(n!=0) continue;
        }
        if(n>=5){
            n=n-5;
            count++;
            if(n!=0) continue;
        }
        if(n>=1){
            n=n-1;
            count++;
            if(n!=0) continue;
        }
    }
    cout<<count<<endl;
    return 0;
}