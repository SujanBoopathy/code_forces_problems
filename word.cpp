#include<iostream>
#include<string.h>
using namespace std;


int main(){
    int count1=0,count2=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i]))
            count1++;
        else
            count2++;
    }

    if(count1>count2){
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    
         

    return 0;
}