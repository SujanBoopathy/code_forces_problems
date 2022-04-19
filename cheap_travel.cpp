#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,a,b,cost=0; 
    cin>>n>>m>>a>>b; 
    if(m*a>=b){
        cost=(n/m)*b+min((n%m)*a,b);
    }
    else{
        cost=n*a;
    }
    cout<<cost<<endl;
    return 0;
}