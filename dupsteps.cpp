#include<iostream>
using namespace std;

int main(){
    string s;
    string res="";
    cin>>s;
    for(int i=0;i<s.length();){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=3;
            if(res!=""){
                res+=" ";
            }
        }
        else{
            res+=s[i];
            i++;
        }
    }
    cout<<res<<endl;
    return 0;
}