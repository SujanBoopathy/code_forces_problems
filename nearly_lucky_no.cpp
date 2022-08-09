#include<iostream>
using namespace std;

void main(){
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++){
        if(s[i]=='4' || s[i]=='7')
        {
            flag+=1;
        }
        
    }
    if(flag==4 || flag==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
