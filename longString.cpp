#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string res[n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int len=s.length();
        if(len>10){
            res[i]=s[0]+to_string((len-2))+s[len-1];
        }
        else if(len>0 && len<10){
            res[i]=s;
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}