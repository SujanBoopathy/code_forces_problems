#include<iostream>
using namespace std;

int main(){
    int n,count;
    cin>>n;
    count=n/5;

    if(n%5!=0) cout<<count+1<<endl;
    else cout<<count<<endl;
    return 0;
}