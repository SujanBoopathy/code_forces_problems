#include<iostream>
using namespace std;

int main(){
    string s,res;
    cin>>s;
    int len=s.length();
    if(len>10){
        res=s[0]+to_string((len-2))+s[len-1];
    }
    else if(len>0 && len<10){
        res=s;
    }
    cout<<res;
    return 0;
}