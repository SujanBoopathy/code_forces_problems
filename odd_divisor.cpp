#include<iostream>
using namespace std;
int main(){
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n&1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok=false;
            long long int div=n;
            while(div>2){
                div/=2;
                if(div & 1){
                    if(n%div==0){
                        ok=true;
                        break;
                    }
                }
            }
            if(ok) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}