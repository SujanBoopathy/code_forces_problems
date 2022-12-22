#include<iostream>
using namespace std;
int main(){
    string s,result="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            result+='0';
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                result+='1';
            }
            else{
                result+='2';
            }
            i++;
        }
    }
    cout<<result<<endl;
    return 0;
}
