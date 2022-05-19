#include<iostream>
using namespace std;
int main(){
    int n;
    long long int num;
    cin>>n;
    while(n--){
        cin>>num;
        int flag=0;
        for(long long int i=3;i<num/2;i+=2){
            if(num%i==0)
                flag=1;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}