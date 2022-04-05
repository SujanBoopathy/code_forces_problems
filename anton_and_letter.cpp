#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char> s1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s1.insert(s[i]);
        }
    }
    cout<<s1.size()<<endl;
    return 0;
}