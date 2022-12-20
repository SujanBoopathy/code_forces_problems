#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1')
            ans+=a;
        else if(str[i]=='2')
            ans+=b;
        else if(str[i]=='3')
            ans+=c;
        else if(str[i]=='4')
            ans+=d;
    }
    cout<<ans<<endl;
    return 0;
}
