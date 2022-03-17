#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;

    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        if(s[i] =='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }
        else{
            t+='.';
            t+=s[i];
        }
    }
    cout<<t<<endl;
    return 0;
}