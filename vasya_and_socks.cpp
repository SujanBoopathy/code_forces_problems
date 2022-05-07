#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=1,count=0;
    for(i=1;i<=n;i++){
        if(i%m==0){
            count++;
        }
        count++;
    }
    if(count%m==0) count++;
    cout<<count<<endl;
    return 0;
}