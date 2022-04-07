#include<iostream>

using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int count[256]={0};
    int flag=0;
    for(int i=0;i<s3.length();i++){
        count[s3[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        count[s2[i]]--;
    }
    for(int i=0;i<s1.length();i++){
        count[s1[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}