#include<iostream>
using namespace std;
void solve(){
    long long int x,y,n;
    cin>>x>>y>>n;
    long long int cnt=n/x;
    long long int ans=x*cnt + y;
    if(ans>n){
        ans-=x;
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}