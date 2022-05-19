#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int num;
    
    for(int i=0;i<n;i++){
        cin>>num;
        if(num%2!=0)
            cout<<"YES"<<endl;
        else{
            while(n%2==0){
                n/=2;
            }
            if(n>1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                
        }
    }
    return 0;
}