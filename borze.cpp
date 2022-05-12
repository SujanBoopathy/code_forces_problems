#include<iostream>
using namespace std;
int main(){
    string s,res="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            res+='0';
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                res+='1';
            }
            else{
                res+='2';
            }
            i++;
        }
    }
    cout<<res<<endl;
    return 0;
}