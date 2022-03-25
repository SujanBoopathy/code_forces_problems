#include<iostream>
using namespace std;
int main(){
    int flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag=1;
        }
    }
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}