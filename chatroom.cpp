#include<iostream>
using namespace std;

int main(){
    string s,a;
    a="hello";
    cin>>s;
    int pass=0,j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[j]){
            pass++;
            j++;
            if(pass==5)
                break;
        }
    }
    if(pass==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}