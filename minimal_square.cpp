#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b; 
        int m=max(a,b)*2;
        cout<<m*m<<endl;
    }
    return 0;
}