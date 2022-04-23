#include<iostream>
using namespace std;
int main(){
    int team[4][5001],ma[4],n,ans,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b; 
        team[b][ma[b]++]=i;
    }
    ans=min(ma[1],min(ma[2],ma[3]));
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<team[1][i]<<" "<<team[2][i]<<" "<<team[3][i]<<endl;
    }
    return 0;
}