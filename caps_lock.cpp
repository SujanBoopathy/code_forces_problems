#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool c=true;

    for(int i=1;i<s.length();i++){
        if(islower(s[i]))
            c=false;
    }
    char u;
    if(c==true){
        for(int j=0;j<s.length();j++){
            if(islower(s[j]))
                u=toupper(s[j]);
            else
                u=tolower(s[j]);
            cout<<u;
        }
    }
    else{
        cout<<s;
    }
    return 0;
}