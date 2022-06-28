#include<iostream>
using namespace std;
void main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b; 
        if(a>b)
            swap(a,b);
        cout<<max(a*2,b)*max(a*2,b)<<endl;
    }
    
}
