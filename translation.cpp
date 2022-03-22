#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    for(int i=0,j=s1.length()-1;i<s1.length();i++,j--){
        if(s1[i]!=s2[j])
            flag=1;
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}