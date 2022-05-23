#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m;
    int count=n;
    while(1){
        a=n/m;
        b=a+(n%m);
        n=b;
        count+=a;
        if(b<m)
            break;
    }
    cout<<count<<endl;
    return 0;
}