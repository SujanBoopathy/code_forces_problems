#include<iostream>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        int c=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                c++;
            }
        }
        if(c==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}