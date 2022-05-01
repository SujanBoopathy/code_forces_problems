#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b; 
        if(a>b)
            swap(a,b);
        cout<<max(a*2,b)*max(a*2,b)<<endl;
    }
    return 0;
}