#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0,temp=0;

    for(int i=0;i<s.length();i++){
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                temp++;
            }
        }
        if(temp==0){
            count++;
        }
        temp=0;
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}